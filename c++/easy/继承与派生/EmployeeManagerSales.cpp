//����һ��Ա����Employee�������ݳ�Ա���������
//����һ������ԱSales�̳���Ա���࣬����Ϊ���۶�����10%
//����һ��������Manager���̶�����8000
//����һ�����۾����࣬�̳�������Ա��;����࣬����Ϊ�̶�����5000�����۶�����5%
//ÿ�������display()���������Ϣ
//�������ж���һ�����۾���������۶�Ϊ100000�������Ϣ
#include  <iostream>
using  namespace  std;
class  Employee
{
public:
        Employee(string  id,string  name):id(id),name(name)
        {}
        void  display()
        {
                cout<<"ID:"<<id<<endl;
                cout<<"Name:"<<name<<endl;
        }
protected:
        string  id,name;
};
class Sales:public Employee{
	private:
		double salary;
	public:
		Sales(string  id,string  name,double sales):Employee(id,name),salary(sales/10){
		}
};
class Manager{
	protected:
		double salary;
	public:
		Manager(){
			salary=8000; 
		}
};
class SalesManager:public Sales,public Manager{
	protected:
		double salary;
	public:
		SalesManager(string  id,string  name,double sales):Sales(id,name,sales){
			salary=5000;
			salary+=sales*5/100; 
		}	
		void display(){
			Employee::display();
			cout<<"Salary:"<<salary<<endl;
		}		
};
int  main()
{
        string  id,name;
        float  sale;
        cout<<"Input  id  name  and  sale:"<<endl;
        cin>>id>>name>>sale;
        if(sale<0)
        {
                cout<<"Input  Error!"<<endl;
                return  0;
        }
        SalesManager sm(id,name,sale);
        sm.display();
        return  0;
}
