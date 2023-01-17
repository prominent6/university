#include<iostream>
using namespace std;
class A{
    int data;
public:
    A(int k=0){
        data=k;
    }
    void show(){
        cout<<"data="<<data<<endl;
    }
};
int main(){
	A a[3];
	for(int i=0;i<3;i++) a[i].show();
	cout<<endl;
	
	A b[3]{1};
	for(int i=0;i<3;i++) b[i].show();
	cout<<endl;
	
	A c[3]{1,2,3};
	for(int i=0;i<3;i++) c[i].show();
	return 0; 
}
