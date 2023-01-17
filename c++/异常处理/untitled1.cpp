#include <iostream>
using namespace std;
int main(void){
	int a=1;
	try{
		if(a==1) throw(a);
		a++;
	}
	catch(int b){
		cout<<"error! a="<<b<<endl;
	}
}
