#include <iostream>
using namespace std; 
void swap(int &ra,int &rb){
	int temp=ra;
	ra=rb;
	rb=temp;
} 
int main(){
	int a=3,b=4;
	swap(a,b);
	cout<<a<<" "<<b;
	return 0;
}
