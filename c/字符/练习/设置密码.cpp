#include <stdio.h>
#include <string.h>
int main(void){
	char str[20];
	gets(str);
	int flag=1,i,j; //1-��ȫ��ȷ 2- ���Ȳ��� 3-С�������ַ� 4-�Ƿ��ַ� -->ֻ��1��0��4 
	int have[4]={0}; //0-��д��ĸ 1-Сд 2-���� 3-������� 
	for(i=0;str[i]!='\0';i++){  //һ��ʼû��ע�⵽���ڣ��Լ�д�� '0'<=str[i]<='9'������������ 
		if('A'<=str[i]&&str[i]<='Z') have[0]=1;
		else if('a'<=str[i]&&str[i]<='z') have[1]=1;
		else if('0'<=str[i]&&str[i]<='9') have[2]=1;
		else if(str[i]=='@'||str[i]=='-'||str[i]=='_'||str[i]=='~'||str[i]=='#') have[3]=1; //���ڷǷ���ĸ���ж�һ�� 
		else{
			flag=4;
		}
	}
	if(flag==4) printf("�����д��ڷǷ��ַ�\n");
	int sum=0;
	for(j=0;j<4;j++){
		sum+=have[j];
	}
	if(sum<3){
		flag=0;
		if(strlen(str)<=8) printf("���볤��̫����������Ӧ������Сд��ĸ�����֡������������������������ַ�\n");
		else printf("������Ӧ������Сд��ĸ�����֡������������������������ַ�\n");
	}else{
		if(strlen(str)<=8){
			flag=0; 
			printf("���볤��̫��\n");
		}
	}
	if(flag==1) printf("�������óɹ�\n");
//	else if(flag==2) printf("���볤��̫��\n");
//	else if(flag==3) printf("������Ӧ������Сд��ĸ�����֡������������������������ַ�\n");
//	else if(flag==4) printf("�����д��ڷǷ��ַ�\n");
//	else if(flag==2&&flag==3) printf("���볤��̫����������Ӧ������Сд��ĸ�����֡������������������������ַ�\n");
	return 0;
}
