#include <iostream>
using namespace std;
int x=5,y=7;
void myFunction(){
    int y=10;
    cout<<"x from myFunction:"<<x<<endl;
    cout<<"y from myFunction:"<<y<<endl;
}
int main()
{
    cout<<"x from main:"<<x<<endl; //5
    cout<<"y from main:"<<y<<endl; //7
    myFunction(); //5 10
    cout<<"Back from myFunction!"<<endl;
    cout<<"x from main:"<<x<<endl; //5
    cout<<"y from main:"<<y<<endl; //7
    return 0;
}
