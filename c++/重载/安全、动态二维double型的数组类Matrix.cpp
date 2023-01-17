//��дһ�����򣬶���һ����ȫ����̬��άdouble�͵�������Matrix��
//ʵ��Matrix table(row,col)����row��col�еĶ�ά����, row��colΪ��������
//ʵ��table(i,j)����table�ĵ�i�е�j�е�Ԫ�أ��кź��кŴ�0��ʼ��
//ʵ��Matrix���������(>>��<<)��
//ʵ�־���ӵȡ��˵�����(+=��*=)������Matrix& operator+=(const Matrix&); Matrix& operator*=(const Matrix&)��
//ʵ�־���ĸ�ֵ����(=)������Matrix& operator=(const Matrix&)��

#include <iostream>
#include <vector>
using namespace std;
class Matrix{
	public:
		int row,col;
		vector<int> vec;
		Matrix(int r,int c){
			row=r;
			col=c;
		}
		Matrix(const Matrix &table)
		{
		    row=table.row;
		    col=table.col;
		    for(int i=0;i<row*col;i++)
		    {
		        vec.push_back(table.vec[i]);
		    }
		}
		//�����Ӧ���е�Ԫ��
		void table(const int i)
		{
			cout << vec[i] << endl;
		}
		
		friend istream &operator>>(istream &in,Matrix &x){
			int a;
			for(int i=0;i<x.row*x.col;i++){
				in>>a;
				x.vec.push_back(a);
			}
			return in;
		};
		friend  ostream  &operator<<(ostream  &out,Matrix x){
		    for(int i=0;i<x.row;i++)
		    {
		        for(int j=0;j<x.col-1;j++)
		        {
		            cout<<x.vec[i*x.col+j]<<" ";
		        }
		        cout<<x.vec[i*x.col+x.col-1]<<endl;
		    }
			return out;
		};
		
	    Matrix operator+(const Matrix &table) const{
			Matrix table3(row,col);
	        for(int i=0;i<row*col;i++)
	        {
	            table3.vec.push_back(vec[i]+table.vec[i]);
	        }
	        return table3;
		};
	    Matrix operator*(const Matrix &table) const{
	    	Matrix table3(row,table.col);
	        for(int i=0;i<row;i++)
	        {
	            for(int j=0;j<table.col;j++)
	            {
	                table3.vec[i*table.col+j]=0;
	                for(int k=0;k<col;k++)
	                {
	                    table3.vec[i*table.col+j]+=vec[i*col+k]*table.vec[k*table.col+j];
	                }
	            }
	        }
	        return table3;
		};
}; 

int main()
{
    int r1,c1,r2,c2;
    cin>>r1>>c1;
    Matrix table1(r1,c1);
    cin>>table1;
    cin>>r2>>c2;
    Matrix table2(r2,c2);
    cin>>table2;
    
    table1.table(r1/2*c1+c1/2);
	
    Matrix table3(table1);
    
    Matrix table4(r1,c2),table5(r1,c1);
    
    if(table1.col!=table2.row)
    {
        cout<<"ERROR!"<<endl;
        cout<<endl;
    }
    else
    {
        table4=table1*table2;
        cout<<table4;
        cout<<endl;
    }

    if(table4.row!=table2.row||table4.col!=table2.col)
    {
        cout<<"ERROR!"<<endl;
        cout<<endl;
    }
    else
    {
        table5=table4+table2;
        cout<<table5;
        cout<<endl;
    }
    cout<<table2;
    return 0;
}
