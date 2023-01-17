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
void fun(Base1 *ptr){  //����Ϊָ���������ָ�� ֻ�ܷ��ʵ��ӻ���̳еĳ�Ա 
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
//���ȫΪ Base1::display()


#include <iostream>
using namespace std;
class Base1{
	public:
		virtual void display() const {cout<<"Base1::display()"<<endl;} //����麯�� 
};
class Base2:public Base1{
	public:
		void display() const {cout<<"Base2::display()"<<endl;}
};
class Derived:public Base2{
	public:
		void display() const {cout<<"Derived::display()"<<endl;}
};
void fun(Base1 *ptr){  //ʵ�������еĶ�̬ 
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
//���Ϊ Base1::display() Basel2::display() Derived::display()
