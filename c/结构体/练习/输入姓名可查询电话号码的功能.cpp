//��Ϣ��ѯ���Ӽ���������5�������͵绰���룬���ʵ�����������ɲ�ѯ�绰����Ĺ��ܡ�
#include <stdio.h>
#include <string.h>
struct aa
{
	char name[15];
	char tel[15];
} stu[5];   //���ж����Ա���������� 
int main(void){
	printf("���������� �绰��");
	int i,flag=1;
	for(i=0;i<5;i++){
		scanf("%s %s",&stu[i].name,&stu[i].tel);
	}
	printf("����Ҫ���ҵ�����:");
	char ch[20];
	scanf("%s",&ch);
	for(i=0;i<5;i++){
		if(strcmp(ch,stu[i].name)==0){
			printf("����:%s  �绰:%s\n",stu[i].name,stu[i].tel);
			flag=0;
			break;
		}
	}
	if(flag) printf("û���ҵ�!");
//	for(i=0;i<5;i++){
//		printf("%s %s",stu[i].name,stu[i].tel);
//	}
	return 0;
}
