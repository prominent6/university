//编写一个哺乳动物类Mammal，再由此派生出狗类Dog，
//二者都声明speak()成员函数，该函数在基类中被声明为虚函数。 
//声明一个Dog类的对象，通过此对象调用speak函数，
//声明一个Mammal类的指针指向Dog类的对象，通过指针调用speak函数

#include <iostream>
using namespace std;
class Mammal{
	public:
		virtual void speak(){
		};
};
class Dog:public Mammal{
	public:
		void speak(){
			cout<<"Dog is speaking!"<<endl;
		};
};
int main()
{
    Dog dog;
    Mammal *p;
    dog.speak();
    p=&dog;
    p->speak();
    return 0;
}


