//if��һ����̬  c���� 
#include <stdio.h>
#include <Windows.h>
#include <string.h> 

int main(void){
	char Chinese[16];
	char math[16];
	char English[16];
	
	printf( "������ĺò���\n");    //�ش�û򲻺�
	scanf("%s",Chinese);
	
	printf("�����ѧ�ò���\n");
	scanf("%s",math);
	
	printf("���Ӣ��ò���\n");
	scanf("%s",English);
	
	if (strcmp(Chinese,"��")==0){
		printf("�ۣ������һ��������ôѧϰ����\n");
	} else if(strcmp(math,"��")==0){
		printf("�ۣ������һ����ѧ��ôѧϰ����\n");
	} else if(strcmp(English,"��")==0){
	    printf("�ۣ������һ��Ӣ����ôѧϰ��?\n");
	} else{
		printf("һ����Ͱɣ�\n");
	}
	
	system("pause");
	return 0;
} 
