//if��һ����̬ 
#include <iostream>
#include <Windows.h>
#include <string> 

using namespace std;

int main(void){
	string Chinese;
	string math;
	string English;
	
	cout << "������ĺò���" <<endl;    //�ش�û򲻺�
	cin >> Chinese;
	
	cout << "�����ѧ�ò���" <<endl;
	cin >> math;
	
	cout << "���Ӣ��ò���" <<endl;
	cin >> English;
	
	if (Chinese=="��"){
		cout << "�ۣ������һ��������ôѧϰ����" << endl;
	} else if(math=="��"){
		cout << "�ۣ������һ����ѧ��ôѧϰ����" << endl;
	} else if(English=="��"){
		cout << "�ۣ������һ��Ӣ����ôѧϰ����" << endl;
	} else{
		cout << "һ����Ͱɣ�" << endl;
	}
	
	system("pause");
	return 0;
}
