//��ܲ���� 
#include <iostream>
#include <Windows.h>
#include <string> 

using namespace std;

int main(void){
	float time=0;
	int days=0;
	 
	cout << "����������Уʱ��" << endl;
	cin >> time;
	
	days=time/7*2;
	
//	if((time-6)%7==0){
//		days=x;
//	}else{
//	days=x;
//	}
	
	cout << "��ļ���Ϊ��" << days << endl;
      
    system("pause");
	return 0;  
}
