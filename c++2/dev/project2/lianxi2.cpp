#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

void clearBuff(){
	char tmp;
	while(tmp=getchar() !='\n');
}
int main(void){
	int height=0;
	int age=0;
	
	cout << "������������"<< endl;
	cin>>height;
	
	cout <<"�������������" << endl;
	cin >> age;
	
	if(cin.fail()) {
		cout <<"����ʧ�ܣ�Ӧ������һ������" <<endl;
		cin.clear();   //cin.sync
        clearBuff;	
	}
	
	cout << "�������ǣ�" <<height<<endl;
	cout << "��������ǣ�" <<age <<endl;
	
	system ("pause");
	return 0;
}
