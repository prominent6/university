//定义一个基类BaseClass，从它派生出类DerivedClass。
//BaseClass有成员函数fn1()，fn2()，DerivedClass也有成员函数fn1()，fn2()。
//在主函数中声明一个DerivedClass的对象，
//分别用DerivedClass的对象以及BaseClass和DerivedClass的指针来调用fn1()，fn2()，
//观察运行结果。
#include <iostream>
using namespace std;
class BaseClass{
	public:
		BaseClass(){ }
		void fn1(){
			cout<<"BaseClass:fn1()"<<endl; 
		};
		void fn2(){
			cout<<"BaseClass:fn2()"<<endl;
		};
		~BaseClass(){ }
};
class DerivedClass:public BaseClass{
	public:
		DerivedClass(){ }
		void fn1(){
			cout<<"DerivedClass:fn1()"<<endl; 
		};
		void fn2(){
			cout<<"DerivedClass:fn2()"<<endl;
		};
		~DerivedClass(){ }
};

int  main()
{
        DerivedClass  dc;
        BaseClass  *pb  =  &dc;
        DerivedClass  *pd  =  &dc;
        dc.fn1();
        dc.fn2();
        pb->fn1();
        pb->fn2();
        pd->fn1();
        pd->fn2();
}
