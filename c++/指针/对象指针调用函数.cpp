//����һ������BaseClass��������������DerivedClass��
//BaseClass�г�Ա����fn1()��fn2()��DerivedClassҲ�г�Ա����fn1()��fn2()��
//��������������һ��DerivedClass�Ķ���
//�ֱ���DerivedClass�Ķ����Լ�BaseClass��DerivedClass��ָ��������fn1()��fn2()��
//�۲����н����
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
