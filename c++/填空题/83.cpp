#include <iostream>
using namespace std;
int main(){
	int b(6);
	do{
		++b; 
		cout<<++b; 
		if(b==10)  break;
	}while(b<15);
}
//810
