//定义一个哺乳动物类Mammal
//再由此派生出狗类Dog
//定义一个Dog类的对象
//观察基类与派生类的构造函数和析构函数的调用顺序
#include  <iostream>
#include  <string>
using  namespace  std;
class  Mammal
{
public:
        Mammal(string name):name(name)
        {
            cout<<"Con.Mammal"<<endl;
        }
        ~Mammal()
        {
            cout<<"Des.Mammal"<<endl;
        }
protected:
        string  name;
};
class Dog:public Mammal{
	public:
		Dog(string name):Mammal(name)
        {
            cout<<"Con.Dog:"<<name<<endl;
        }
        ~Dog()
        {
            cout<<"Des.Dog:"<<name<<endl;
        }
};  

int  main()
{
        string  name;
        cout<<"Input  Dog  Name:";
        cin>>name;
        Dog d(name);
        return  0;
}
