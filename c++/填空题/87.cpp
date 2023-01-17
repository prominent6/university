#include <iostream>
using namespace std;
class A{
private:
	int m;
public:
	A():m(1){}
	~A(){}
	A fun1(){
		cout<<"m="<<m<<endl;
		return *this; 
	}
	A &fun2(){
		cout<<"m="<<m<<endl;
		return *this; 
	}
	void set(int x){m=x;}
	void display(){
		cout<<"m="<<m<<endl;
	}
};
int main(){
	cout<<"==返回对象=="<<endl;
	A a1;
	a1.fun1().set(2);
	a1.display();
	cout<<"==返回引用=="<<endl;
	A a2;
	a2.fun2().set(2);
	a2.display();
	return 0; 
} 
