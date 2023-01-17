#include<iostream>
#include<vector>
using namespace std;
class Matrix
{
public:
	int row, col, flag = 1;
 
//	//用vector嵌套来存放动态二维数组
//	vector<vector<double>> v;
// 
//	//输出对应行列的元素
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
	//先输入行列数
	cin >> m.row >> m.col;
 
	//x为即将输入的数组元素
	double x=0.0;
 
	//v是二维数组：把一行里的元素作为整体存储，如：v[i][N]是数组的第i行
	//vv是一维数组：存某一行里的不同列的元素，如：在存第一行元素时，vv[j]是第一行第j个元素
	//vector作为顺序容器，长度可变，输入操作为v.push_back(x)，不能用赋值的方法输入
	vector<double> vv;
	m.v.clear();
	for (int i = 0; i < m.row; i++)
	{
		//清除vv里上一次存过的元素，方便多次使用
		vv.clear();
		for (int j = 0; j < m.col; j++)
		{
			cin >> x;
			//用vv来存某一行的不同列的元素
			vv.push_back(x) ;
		}
		//一行输入完后就整体存入v，即将此时的vv存入v
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
		//主要是考虑每一行最后一个元素后接endl,而不是" "
		//最后一行的最后一个元素无endl
		for (int j = 0; j < m.col - 1; j++)
		{
			cout << m.v[m.row - 1][j] << " ";
		}
		cout << m.v[m.row - 1][m.col - 1];
	}
	//如果被标志过，即两数组不能相加、相乘，就输出错误
	else
	{
		cout << "ERROR!";
	}
		return os;
}
Matrix& Matrix:: operator+=(const Matrix& m)
{
	//相加的条件:行列数均相等
	//相加：即对应元素相加
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
	//相乘条件：前一个的列数=后一个的行数
	//注意两矩阵相乘的过程
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
	//赋值类似于输入，需要修改row、col
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
