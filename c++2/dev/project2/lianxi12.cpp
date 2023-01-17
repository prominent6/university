// if语句的嵌套
#include <iostream>
#include <Windows.h>
#include <string> 

using namespace std;

int main(void){
	int x=0;
	int y=0;
	int z=0;
	
	cout << "请输入三个整数:" <<endl; 
	cin >> x >> y >> z;
	
	if(x>y){
		if(z>x){
			cout << "最大值是：" << z << endl;
		} else{
			cout << "最大值是：" << x << endl;
		} 
		
	} else{
		if(y>z){
			cout << "最大值是：" << y << endl;
		} else{
			cout << "最大值是：" << z << endl;
		}
	}
	
	system("pause");
	return 0;
} 
