//��Ŀ�����
#include <iostream>
#include <Windows.h>
#include <string> 

using namespace std;

int main(void){
	float height;
	
	cout << "�����߶��٣�" << endl;
	cin >> height;
	
	cout << (height>170 ? "Ů��":"С����") << "��ã�" <<endl;
	
	system("pause");
	return 0; 
}
