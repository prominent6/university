#include <iostream>
using namespace std;
int main(void){
	int a;
	int &b=a;
	a=5;
	cout<<"a"<<a<<endl;
	cout<<"b"<<b<<endl;
	
	int c=8;
	b=c; //相当于a=c
	cout<<"a"<<a<<endl;
	cout<<"b"<<b<<endl;
	cout<<"c"<<c<<endl;
	return 0;
}
