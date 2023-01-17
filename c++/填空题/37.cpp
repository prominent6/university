#include <iostream>
using namespace std;
class  A 
{
private:
	int a;
	
public:
	A(int i) {a=i;}
	void disp(){ cout<<"a="<<a<<endl;}
};

class B
{
private:
	int b;
public:
	B(int j) {b=j;}
	void disp(){ cout<<"b="<<b<<endl;}
};
class C: public B,public A
{
private:
	int c;
public:
	C(int k):A(k-2),B(k+2) {c=k;}
	void disp()
	{ A::disp();
		B::disp();
		cout<<"c="<<c<<endl;}
};
int main()
{
	C c(10);
	c.disp();
	return 0;    
} 
/*
  a=8
  b=12
  c=10
 */

