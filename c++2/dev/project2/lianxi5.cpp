//��һ�������������λ���ó�0110
#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main(void){
    int x=0;
    cout << "������һ������" <<endl;
	cin >>x;
	
	//�������ĺ���λ��Ϊ0000 
	x=x&(~15);
   //�������ĺ���λ��Ϊ0110 
	x=x|6;
	
	cout << "x=" << x << endl;
	
	system("pause");
	return 0;
} 
