#include <stdio.h>
#include <stdlib.h>
struct member{
    char name[20];
    char num[20];
    int total;
    struct member *next;
};
//�����ڵ� ������ֵΪ�ڵ�ĵ�ַ 
struct member *CreatNode()
{
	struct member *p; 
	p=(struct member*) malloc(sizeof(struct member));
	if(p==NULL){
		exit(0);
	} 
	p->next=NULL; 
	 
	printf("����������ÿ����Ա�ı�š����������֣� \n");
	scanf("%s %s %d",&(p->name),&(p->num),&(p->total));
	p->next=NULL;
	return p;
}

//��������
struct member *createlist(void){
	struct member *head=NULL,*pre,*p; 
	char c;
	do{
		printf("�Ƿ��������,��Y���������룬�������ͽ���.\n");
		scanf(" %c",&c);
		if(c!='Y') break;
		p=CreatNode();
		if(head==NULL) head=p; 
		else pre->next=p; 
		pre=p;
	} 
}  

