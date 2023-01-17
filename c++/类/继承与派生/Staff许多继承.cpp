#include <iostream>
#include <string> 
using namespace std;
class Staff{
	public:
		int num;
		string name;
		int BasicSale;
		void initStaff(int n,string s,int b){
			this->num=n;
			this->name=s;
			this->BasicSale=b;
		}
		
}; 
class Saleman:public Staff{
	public:
		int personAmount; 
		void initSaleman(int n,string s,int b,int p){
			initStaff(n,s,b);
			this->personAmount=p;
		};
};
class Manager:public Staff{
	public:
		int totalAmount;
		void initManager(int n,string s,int b,int t){
			initStaff(n,s,b);
			this->totalAmount=t;
		};
};
class SaleManager:public Saleman,public Manager{
	public:
		SaleManager(int n,string s,int b,int p,int t){
			initSaleman(n,s,b,p);
			initManager(n,s,b,t);
		}
		void show(){
			cout<<"num:"<<Manager::num<<endl;
			cout<<"name:"<<Manager::name<<endl;
			cout<<"BasicSale:"<< Manager::BasicSale<<endl;
			cout<<"personAmount:"<<personAmount<<endl;
			cout<<"tatalAmount:"<<totalAmount<<endl;
		}
};
int main()
{
    SaleManager sm(11,"zhangsan",100,200,500); // 参数含义依次为编号，姓名，基本工资，个人有销售额，销售总额
    sm.show();
    return 0;
}
