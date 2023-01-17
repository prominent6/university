//定义一个基类BaseClass，从它派生出类DerivedClass。
//BaseClass有成员函数fn1()，fn2()。fn1()是虚函数；
//DerivedClass也有成员函数fn1()，fn2()。
//在主函数中声明一个DerivedClass类的对象，
//分别用BaseClass和DerivedClass的指针指向DerivedClass的对象，
//并通过指针调用fn1()，fn2()，观察运行结果。
#include <iostream>
using namespace std;
class BaseClass{
	public:
		virtual void fn1(){
		};
		void fn2(){
			cout<<"BaseClass:fn2()"<<endl;
		};
};
class DerivedClass:public BaseClass{
	public:
		void fn1(){
			cout<<"DerivedClass:fn1()"<<endl;
		};
		void fn2(){
			cout<<"DerivedClass:fn2()"<<endl;
		};
};
int main()
{
    DerivedClass dc;
    BaseClass *pb = &dc;
    DerivedClass *pd = &dc;
    pb->fn1();
    pb->fn2();
    pd->fn1();
    pd->fn2();
    return 0;
}
//DerivedClass:fn1()
//BaseClass:fn2()
//DerivedClass:fn1()
//DerivedClass:fn2()
