#include <iostream>
#include <Windows.h>
#include <string> 

using namespace std;

int main(void){
	/*����һ�����ļ���
	 ���ڶ���������˿
	 �������������
	 �����ģ����ܲ���Ѽ��
	 �����壻����Ѽ��
	 ����������Ϣ
	 �����죺��Ϣ
	                  */
	  
	int num;
	
	cout << "�������ţ�1-7��" << endl;
	cin >>num;
	
	if(num==1){
		cout << "����һ�����ļ���" << endl;
	} else if(num==2){
		cout << "���ڶ���������˿" << endl;
	} else if(num==3){
		cout << "�������������" << endl;	
	} else if(num==4){
		cout << "�����ģ����ܲ���Ѽ��" << endl;
	} else if(num==5){
		cout << "�����壻����Ѽ��" << endl;	
	} else if(num==6){
		cout << "����������Ϣ" << endl;	
	} else if(num==7){
		cout << "�����죺��Ϣ" << endl;	
	} else {
		cout << "������Ч��������1-7" << endl;
	}
	
	system("pause");
	return 0;
}
