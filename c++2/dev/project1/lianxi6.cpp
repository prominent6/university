#include <iostream>
#include <Windows.h>
#include <string>        //c++语言风格 

using namespace std;

int main(void){
    string line;
	int count=0;
	int length=0;
	
    cout << "请输入任意多行："<<endl;
	
	while(1) { //1就是真
     //直到输入结束： 按下Ctrl+z,就会遇到文件结束符(EOF）， 返回0（null） 
	   if((getline(cin,line))==0){
		  	break;
		  } 
	    count++;  //count=count+1
	    length+=line.length();  //a+=100即a=a=100 
	}
   	 
   	 cout <<"一共有" <<count <<"行" <<endl;
     cout <<"总长度为：" << length<<endl;
   	 
	system ("pause");
	return 0;
}
