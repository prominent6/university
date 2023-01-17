#include<iostream>
#include<vector>
using namespace std;
class Matrix
{
public:
	int row, col, flag = 1;
 
//	//��vectorǶ������Ŷ�̬��ά����
//	vector<vector<double>> v;
// 
//	//�����Ӧ���е�Ԫ��
//	void table(const int i, const int j)
//	{
//		cout << v[i][j] << endl;
//	}
	
	friend ostream& operator<<(ostream& os, Matrix &m);
	friend istream& operator>>(istream& is, Matrix &m);
	Matrix& operator+=(const Matrix&); 
	Matrix& operator*=(const Matrix&);
	Matrix& operator=(const Matrix&);
};
 
istream& operator>>(istream& is, Matrix& m)
{
	//������������
	cin >> m.row >> m.col;
 
	//xΪ�������������Ԫ��
	double x=0.0;
 
	//v�Ƕ�ά���飺��һ�����Ԫ����Ϊ����洢���磺v[i][N]������ĵ�i��
	//vv��һά���飺��ĳһ����Ĳ�ͬ�е�Ԫ�أ��磺�ڴ��һ��Ԫ��ʱ��vv[j]�ǵ�һ�е�j��Ԫ��
	//vector��Ϊ˳�����������ȿɱ䣬�������Ϊv.push_back(x)�������ø�ֵ�ķ�������
	vector<double> vv;
	m.v.clear();
	for (int i = 0; i < m.row; i++)
	{
		//���vv����һ�δ����Ԫ�أ�������ʹ��
		vv.clear();
		for (int j = 0; j < m.col; j++)
		{
			cin >> x;
			//��vv����ĳһ�еĲ�ͬ�е�Ԫ��
			vv.push_back(x) ;
		}
		//һ�����������������v��������ʱ��vv����v
		m.v.push_back(vv);
	}
	return is;
}
ostream& operator<<(ostream& os, Matrix& m)
{
	if (m.flag != 0)
	{
		for (int i = 0; i < m.row - 1; i++)
		{
			for (int j = 0; j < m.col - 1; j++)
			{
				cout << m.v[i][j] << " ";
			}
			cout << m.v[i][m.col - 1] << endl;
		}
		//��Ҫ�ǿ���ÿһ�����һ��Ԫ�غ��endl,������" "
		//���һ�е����һ��Ԫ����endl
		for (int j = 0; j < m.col - 1; j++)
		{
			cout << m.v[m.row - 1][j] << " ";
		}
		cout << m.v[m.row - 1][m.col - 1];
	}
	//�������־�����������鲻����ӡ���ˣ����������
	else
	{
		cout << "ERROR!";
	}
		return os;
}
Matrix& Matrix:: operator+=(const Matrix& m)
{
	//��ӵ�����:�����������
	//��ӣ�����ӦԪ�����
	if (row == m.row && col == m.col)
	{
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				v[i][j] += m.v[i][j];
			}
		}
	}
	else
	{
		flag = 0;
	}
	return *this;
}
Matrix& Matrix:: operator*=(const Matrix& m)
{
	//���������ǰһ��������=��һ��������
	//ע����������˵Ĺ���
	if (col == m.row )
	{
		for (int i = 0; i < row; i++)
		{
			double sum = 0;
			for (int j = 0; j < m.col; j++)
			{
				for (int k = 0; k < col; k++)
				{
					sum += v[i][k] * m.v[k][j];
				}
				v[i][j] = sum;
			}
			
		}
	}
	else
	{
		flag = 0;
	}
	return *this;
}
Matrix& Matrix::operator=(const Matrix& m)
{
	//��ֵ���������룬��Ҫ�޸�row��col
	flag = 1;
	row = m.row;
	col = m.col;
	vector<double> vv;
	v.clear();
	for (int i = 0; i < m.row; i++)
	{
		vv.clear();
		for (int j = 0; j < m.col; j++)
		{
			vv.push_back(m.v[i][j]);
		}
		v.push_back(vv);
	}
	return *this;
}
int main()
{
	Matrix m1, m2;
	cin >> m1 >> m2;
 
	m1.table(m1.row / 2, m1.col / 2);
 
	m1 *= m2;
	cout << m1 << endl;
 
	m1 += m2;
	cout << m1 << endl;
 
	m1 = m2;
	cout << m1;
	return 0;
}
