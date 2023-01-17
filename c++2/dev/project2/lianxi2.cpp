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
	
	cout << "请输入你的身高"<< endl;
	cin>>height;
	
	cout <<"请输入你的年龄" << endl;
	cin >> age;
	
	if(cin.fail()) {
		cout <<"输入失败，应该输入一个整数" <<endl;
		cin.clear();   //cin.sync
        clearBuff;	
	}
	
	cout << "你的身高是：" <<height<<endl;
	cout << "你的年龄是：" <<age <<endl;
	
	system ("pause");
	return 0;
}
