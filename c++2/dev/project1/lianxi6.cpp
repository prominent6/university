#include <iostream>
#include <Windows.h>
#include <string>        //c++���Է�� 

using namespace std;

int main(void){
    string line;
	int count=0;
	int length=0;
	
    cout << "������������У�"<<endl;
	
	while(1) { //1������
     //ֱ����������� ����Ctrl+z,�ͻ������ļ�������(EOF���� ����0��null�� 
	   if((getline(cin,line))==0){
		  	break;
		  } 
	    count++;  //count=count+1
	    length+=line.length();  //a+=100��a=a=100 
	}
   	 
   	 cout <<"һ����" <<count <<"��" <<endl;
     cout <<"�ܳ���Ϊ��" << length<<endl;
   	 
	system ("pause");
	return 0;
}
