#include <iostream>
#include <Windows.h>
#include <string>        //c++���Է�� 

using namespace std;

int main(void){
    string word;
	int count=0;
	int length=0;
	
    cout << "�����������ʣ�"<<endl;
	
	while(1) { //1������
     //ֱ����������� ����Ctrl+z,�ͻ������ļ�������(EOF���� ����0��null�� 
	   if((cin>>word)==0){
		  	break;
		  } 
	    count++;  //count=count+1
	    length+=word.length();  //a+=100��a=a=100 
	}
   	 
   	 cout <<"һ����" <<count <<"������" <<endl;
     cout <<"���ʵ��ܳ���Ϊ��" << length<<endl;
   	 
	system ("pause");
	return 0;
}
