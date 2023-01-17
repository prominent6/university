#include <iostream>
using namespace std;

class Test
{
public:
    Test()
    {
        cout << "con." << endl;
    }
    ~Test()
    {
        cout << "des." << endl;
    }
};

Test fun()
{
    return Test();
}

int main()
{
    /*int n = 5;
    int&& ra = move(n);*/
    float n = 6;
    float& lr_n = n;  //对变量n的左值引用
    //float&& rr_n = n; //error
    float&& rr_n = move(n);
    cout << rr_n << endl; //6
    return 0;
}


//class MyStr
//{
//public:
//    string s;
//    MyStr():s(""){}
//    MyStr(string _s) :s(move(_s)) {}
//    MyStr(MyStr&& str) noexcept //无异常
//        :s(move(str.s)){}
//};
