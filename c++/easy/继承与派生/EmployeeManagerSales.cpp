//定义一个员工类Employee，有数据成员姓名，编号
//定义一个销售员Sales继承自员工类，工资为销售额的提成10%
//定义一个经理类Manager，固定工资8000
//定义一个销售经理类，继承自销售员类和经理类，工资为固定工资5000加销售额的提成5%
//每个类均有display()函数输出信息
//主函数中定义一个销售经理对象，销售额为100000，输出信息
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
