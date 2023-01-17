#include <iostream>
#include "Array.h"
using namespace std;
int main(){
	int n;
	cout<<"Input n:";
	cin>>n;
	Array<float>a(n);
	cout<<"Input scores:";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	float sum=0.0;
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
	cout<<"Average:"<<sum/a.getSize()<<endl;
	return 0;
}
