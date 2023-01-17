#include <iostream>
using namespace std;
float &cut(float &a,float &b){
	return a<b?a:b; 
}
int main(){
    float a,b;
    cin>>a>>b;
    cut(a,b)=0;
    cout<<"to pay:"<<a+b<<endl;    
    return 0;
}

