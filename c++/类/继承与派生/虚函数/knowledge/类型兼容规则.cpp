#include <iostream>
using namespace std;
class Base1{
	public:
		void display() const {cout<<"Base1::display()"<<endl;} 
};
class Base2:public Base1{
	public:
		void display() const {cout<<"Base2::display()"<<endl;}
};
class Derived:public Base2{
	public:
		void display() const {cout<<"Derived::display()"<<endl;}
};
void fun(Base1 *ptr){  //参数为指向基类对象的指针 只能访问到从基类继承的成员 
	ptr->display();
}
int main(){
	Base1 base1;
	Base2 base2;
	Derived derived;
	
	fun(&base1);
	fun(&base2);
	fun(&derived);
	return 0;
}
//输出全为 Base1::display()


#include <iostream>
using namespace std;
class Base1{
	public:
		virtual void display() const {cout<<"Base1::display()"<<endl;} //变成虚函数 
};
class Base2:public Base1{
	public:
		void display() const {cout<<"Base2::display()"<<endl;}
};
class Derived:public Base2{
	public:
		void display() const {cout<<"Derived::display()"<<endl;}
};
void fun(Base1 *ptr){  //实现运行中的多态 
	ptr->display();
}
int main(){
	Base1 base1;
	Base2 base2;
	Derived derived;
	
	fun(&base1);
	fun(&base2);
	fun(&derived);
	return 0;
}
//输出为 Base1::display() Basel2::display() Derived::display()
