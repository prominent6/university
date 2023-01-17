//定义一个抽象类Base,
//在该类中定义一个纯虚函数virtual void abstractMethod() = 0;
//派生一个基于Base的派生类Derived，
//在派生类Derived的abstractMethod方法中输出"Derived::abstractMethod is called"
#include<iostream>
using  namespace  std;
class Base{
	public:
		virtual void abstractMethod() = 0;
};
class Derived:public Base{
public:
	void abstractMethod(){
		cout<<"Derived::abstractMethod is called";
	}
};
int main()
{
    Base *pBase = new Derived;
    pBase->abstractMethod();
    delete pBase;
    return 0;
}
