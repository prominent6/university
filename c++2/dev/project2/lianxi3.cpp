#include <stdio.h>
#include <Windows.h>
#include <string.h>

int main(void){
	char addr[]= "�Ĵ�";
	printf("ͬѧ�����������ˣ�\n");
	scanf("%s",&addr);
	
	if(strcmp(addr,"����")==0){
		printf("ͬѧ������������Ŷ��\n");
	} else{
		printf("����������Ե�����\n");
	}
	
	system("pause");
	return 0;
}
