#include <stdio.h>
#include <windows.h>
#include <string.h>    //c���Է��

int main(void){
	char line[128];     //�ǵö����ж���Ԫ�� 
	int count=0;
	int length=0;
	
    printf("������������У�\n");  //�ǵû��з�\n 
	
	while(1) { //1������
     //ֱ����������� ����Ctrl+z,�ͻ������ļ�������(EOF���� ����0
	   if((gets(line))==0){
		  	break;
		  } 
	    count++;  //count=count+1
	    length+=strlen(line);  //a+=100��a=a=100 
	}
   	 
   	 printf("һ����%d��\n",count);
     printf("�ܳ���Ϊ��%d\n",length);
   	 
	system ("pause");
	return 0;
}
