//if��һ����̬  c���� 
#include <stdio.h>
#include <Windows.h>
#include <string.h> 

int main(void){
	char answer[16];
	
	printf( "������ĺò���\n");    //�ش�û򲻺�
	scanf("%s",answer);
	
	if (strcmp(answer,"��")==0){
		printf("�ۣ������һ��������ôѧϰ����\n");
	} else if(printf("�����ѧ�ò���\n")&&
	          scanf("%s",answer)&&
	           strcmp(answer,"��")==0){
	  	              printf("�ۣ������һ����ѧ��ôѧϰ����\n");
	} else if(printf("���Ӣ��ò���\n")&&
	                  scanf("%s",answer)&&
					  strcmp(answer,"��")==0){
	                          printf("�ۣ������һ��Ӣ����ôѧϰ��?\n");
	} else{
		printf("һ����Ͱɣ�\n");
	}
	
	system("pause");
	return 0;
} 
