//兰懿出题 
#include <iostream>
#include <Windows.h>
#include <string> 

using namespace std;

int main(void){
	float time=0;
	int days=0;
	 
	cout << "请输入你在校时间" << endl;
	cin >> time;
	
	days=time/7*2;
	
//	if((time-6)%7==0){
//		days=x;
//	}else{
//	days=x;
//	}
	
	cout << "你的假期为：" << days << endl;
      
    system("pause");
	return 0;  
}
