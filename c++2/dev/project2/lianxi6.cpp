//三目运算符
#include <iostream>
#include <Windows.h>
#include <string> 

using namespace std;

int main(void){
	float height;
	
	cout << "你的身高多少？" << endl;
	cin >> height;
	
	cout << (height>170 ? "女神":"小矮子") << "你好！" <<endl;
	
	system("pause");
	return 0; 
}
