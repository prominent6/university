//把一个整数的最低四位设置成0110
#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main(void){
    int x=0;
    cout << "请输入一个整数" <<endl;
	cin >>x;
	
	//把整数的后四位变为0000 
	x=x&(~15);
   //把整数的后四位变为0110 
	x=x|6;
	
	cout << "x=" << x << endl;
	
	system("pause");
	return 0;
} 
