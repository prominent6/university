#include <iostream>
#include <Windows.h>
#include <string> 

using namespace std;

int main(void){
	int time=0;
	int days=0;
	
	cout << "�������Ͽ�ʱ�䣨0-5��" <<endl;
	cin >> time;
	
	//if(time=5) {
//	  days=2;	
//	} else {
//		days=0;
//	}
	
	days=(time==5? 2 : 0); //���Ŵ�򲻴򶼿� 
	
	cout << "��ļ���Ϊ��" << days <<endl;
	
	system("pause");
	return 0;
	
}

