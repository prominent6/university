#include   <iostream>
using   namespace   std;
class Base
{
public:
    Base():data(count)
    {
        cout<<"Base-ctor"<<endl;
        ++count;
    }
    ~Base()
    {
        cout<<"Base-dtor"<<endl;
        --count;
    }
    static int count;
    int data;
};
int Base::count;
class Derived: public Base
{
public:
    Derived():data(count),data1(data)
    {
        cout<<"Derived-ctor"<<endl;
        ++count;
    }
    ~Derived()
    {
        cout<<"Derived-dtor"<<endl;
        --count;
    }
    static int count;
    int data1;
    int data;
};
int Derived::count=10;
int main()
{
    Base* pb = new Derived[3];
	//Base-ctor Derived-ctor Base-ctor Derived-ctor Base-ctor Derived-ctor
    cout<<pb[2].data<<endl; //10
    cout<<static_cast<Derived*>(pb)->data1<<endl; //0
    delete[] pb;
	//Base-ctor Base-ctor Base-ctor
    cout<<Base::count<<endl; //0
    cout<<Derived::count<<endl; //13
    return 0;
}
