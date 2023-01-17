#include <iostream>
#include <complex>
using namespace std;
class Base
{
public:
	Base() {cout<<"Base-ctor"<<endl;}     //1
	~Base() {cout<<"Base-dtor"<<endl;} //注意这里没有虚析构 //2  
	virtual void f(int){cout<<"Base::f(int)"<<endl;} //3
	virtual void f(double){cout<<"Base::f(double)"<<endl;} //4
	virtual void g(int i=10){cout<<"Base::g()"<<i<<endl;}  //5
};
class Derived : public Base
{
public:
	Derived() {cout<<"Derived-ctor" <<endl;}  //6
	~Derived(){cout<<"Derived-dtor"<<endl;} //7
	void f(complex<double>) {
		cout<<"Derived::f(complex)"<<endl;  //8
	}
	void g(int i=20){
		cout<<"Derived::g()"<<i<<endl; //9
	}
};

int main()
{
	cout<<sizeof(Base)<<endl;    //8
	cout<<sizeof(Derived)<<endl;  //8
	Base b; //1 Base-ctor
	Derived d; //1 6 Base-ctor Derived-ctor
	Base *pb=new Derived; //1 6 Base-ctor Derived-ctor
	Derived *pd=new Derived; //1 6 Base-ctor Derived-ctor
	b.f(1.0); //4
	d.f(1.0); //8
	pb->f(1.0); //4
	b.g(); //5 i10
	d.g(); //9 i20 
	pb->g(); //9 i10
	pd->g(); //9 i20
	//与动态内存无关 析构 Derived-dtor Base-dtor Base-dtor
	delete pb; //Base-dtor 如果是虚析构 Derived-dtor Base-dtor
	delete pd; //Derived-dtor Base-dtor
	return 0;
}
