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
	  
	int num=0;
		
	cout << "�������ţ�1-7��" << endl;
	cin >>num;
	
	switch(num) {
	case 1:	// ��������
		cout << "����һ�����ļ���" << endl;
		break;
	case 2:
		cout << "���ڶ���������˿" << endl;
		break;
	case 3:
		cout << "�������������" << endl;
		break;	
	case 4:
		cout << "�����ģ����ܲ���Ѽ��" << endl;
		break;
	case 5:
		cout << "�����壻����Ѽ��" << endl;	
		break;
	case 6:
	case 7: 
		cout << "��ĩ����Ϣ" << endl;	
	    break;
	default:    
		cout << "������Ч��������1-7" << endl;
    }  

	system("pause");
	return 0;	
}
