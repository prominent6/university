// if����Ƕ��
#include <iostream>
#include <Windows.h>
#include <string> 

using namespace std;

int main(void){
	int x=0;
	int y=0;
	int z=0;
	
	cout << "��������������:" <<endl; 
	cin >> x >> y >> z;
	
	if(x>y){
		if(z>x){
			cout << "���ֵ�ǣ�" << z << endl;
		} else{
			cout << "���ֵ�ǣ�" << x << endl;
		} 
		
	} else{
		if(y>z){
			cout << "���ֵ�ǣ�" << y << endl;
		} else{
			cout << "���ֵ�ǣ�" << z << endl;
		}
	}
	
	system("pause");
	return 0;
} 
