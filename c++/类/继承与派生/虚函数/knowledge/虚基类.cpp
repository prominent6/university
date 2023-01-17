//����һ������BaseClass��������������DerivedClass��
//BaseClass�г�Ա����fn1()��fn2()��fn1()���麯����
//DerivedClassҲ�г�Ա����fn1()��fn2()��
//��������������һ��DerivedClass��Ķ���
//�ֱ���BaseClass��DerivedClass��ָ��ָ��DerivedClass�Ķ���
//��ͨ��ָ�����fn1()��fn2()���۲����н����
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
