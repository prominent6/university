#include <iostream>
using namespace std;
class  A 
{
public:
	A() {cout<<"A constructor"<<endl;}
	~A() {cout<<"A destructor"<<endl;}
};
class B:private  A  
{
public:
	B( ){cout<<"B constructor"<<endl;    }
	~B( ){cout<<"B destructor"<<endl;}
};
int main(){
	B b;
	cout<<"调用结束。"<<endl;
}
