#include <stdio.h>
#include <windows.h>
#include <string.h>    //c���Է��

int main(void){
	char word[128];     //�ǵö����ж���Ԫ�� 
	int count=0;
	int length=0;
	
    printf("�����������ʣ�\n");  //�ǵû��з�\n 
	
	while(1) { //1������
     //ֱ����������� ����Ctrl+z,�ͻ������ļ�������(EOF���� ����-1
	   if(scanf("%s",word)==-1){
		  	break;
		  } 
	    count++;  //count=count+1
	    length+=strlen(word);  //a+=100��a=a=100 
	}
   	 
   	 printf("һ����%d""������\n",count);
     printf("���ʵ��ܳ���Ϊ��%d\n",length);
   	 
	system ("pause");
	return 0;
} 
