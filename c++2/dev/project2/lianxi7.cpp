#include <iostream>
#include <Windows.h>
#include <string> 

using namespace std;

int main(void){
	int time=0;
	int days=0;
	
	cout << "请输入上课时间（0-5）" <<endl;
	cin >> time;
	
	//if(time=5) {
//	  days=2;	
//	} else {
//		days=0;
//	}
	
	days=(time==5? 2 : 0); //括号打或不打都可 
	
	cout << "你的假期为：" << days <<endl;
	
	system("pause");
	return 0;
	
}

