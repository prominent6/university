#include <iostream>
using namespace std;
class  A 
{
private:
	int a;    
public:
	A(int i) {a=i;cout<<"A constructor"<<a<<endl;}
};
class B
{
private:
	int b;
public:
	B(int j) {b=j;cout<<"B constructor"<<b<<endl;}
};
class C: public B,public A
{
private:
	int c;
	
public:
	C(int k):A(k-2),B(k+2) {c=k;cout<<"C constructor"<<c<<endl;}
};
int main(){
	C c(10);
}
/*
  A constructor 12
  B constructor 8
  C constructor 10
 */

