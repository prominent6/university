#include <iostream>
#include <Windows.h>
#include <string>        //c++语言风格 

using namespace std;

int main(void){
    string word;
	int count=0;
	int length=0;
	
    cout << "请输入多个单词："<<endl;
	
	while(1) { //1就是真
     //直到输入结束： 按下Ctrl+z,就会遇到文件结束符(EOF）， 返回0（null） 
	   if((cin>>word)==0){
		  	break;
		  } 
	    count++;  //count=count+1
	    length+=word.length();  //a+=100即a=a=100 
	}
   	 
   	 cout <<"一共有" <<count <<"个单词" <<endl;
     cout <<"单词的总长度为：" << length<<endl;
   	 
	system ("pause");
	return 0;
}
