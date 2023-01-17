//����һ��������Base,
//�ڸ����ж���һ�����麯��virtual void abstractMethod() = 0;
//����һ������Base��������Derived��
//��������Derived��abstractMethod���������"Derived::abstractMethod is called"
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
