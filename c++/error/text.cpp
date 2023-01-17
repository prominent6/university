#include <iostream>
#include <string>
using namespace std;
class MyStr
{
public:
    MyStr() = default;
    MyStr(const string s) :s(s)
    {};
    MyStr(const MyStr& s) :s(s.s)
    {};
    string str() { return s; }
    //~MyStr()=delete;
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
    cout << a.str() << endl;
    cout << b.str() << endl;
    MyStr&& c = getString();
    cout << c.str() << endl;
    MyStr&& d = move(b);
    cout << d.str() << endl;
}


