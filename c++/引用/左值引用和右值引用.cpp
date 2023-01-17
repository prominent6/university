#include <iostream>
#include <string>
using namespace std;
class MyStr
{
public:
    MyStr() = default; //default函数
    MyStr(const string s) :s(s)
    {};
    MyStr(MyStr&& str)=default;
    string str() { return s; }
    ~MyStr()=default;
private:
    string s;
};
MyStr getString()
{
    return MyStr("hello");
}

int main()
{
    MyStr a("Hello");
    MyStr b("World");
    cout << a.str() << endl; //Hello
    cout << b.str() << endl; //World
    MyStr&& c = getString(); 
    cout << c.str() << endl; //hello
    MyStr&& d = move(b); //move()函数将佐治对象移动成为右值
    cout << d.str() << endl; //World
}

