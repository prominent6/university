//if的一种形态 
#include <iostream>
#include <Windows.h>
#include <string> 

using namespace std;

int main(void){
	string Chinese;
	string math;
	string English;
	
	cout << "你的语文好不好" <<endl;    //回答好或不好
	cin >> Chinese;
	
	cout << "你的数学好不好" <<endl;
	cin >> math;
	
	cout << "你的英语好不好" <<endl;
	cin >> English;
	
	if (Chinese=="好"){
		cout << "哇，想请教一下语文怎么学习啊？" << endl;
	} else if(math=="好"){
		cout << "哇，想请教一下数学怎么学习啊？" << endl;
	} else if(English=="好"){
		cout << "哇，想请教一下英语怎么学习啊？" << endl;
	} else{
		cout << "一起加油吧！" << endl;
	}
	
	system("pause");
	return 0;
}
