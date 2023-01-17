#include <stdio.h>
#include <stdlib.h>
struct member{
    char name[20];
    char num[20];
    int total;
    struct member *next;
};
//创建节点 ，返回值为节点的地址 
struct member *CreatNode()
{
	struct member *p; 
	p=(struct member*) malloc(sizeof(struct member));
	if(p==NULL){
		exit(0);
	} 
	p->next=NULL; 
	 
	printf("请依次输入每个会员的编号、姓名、积分： \n");
	scanf("%s %s %d",&(p->name),&(p->num),&(p->total));
	p->next=NULL;
	return p;
}

//创建链表
struct member *createlist(void){
	struct member *head=NULL,*pre,*p; 
	char c;
	do{
		printf("是否继续输入,按Y键继续输入，其他键就结束.\n");
		scanf(" %c",&c);
		if(c!='Y') break;
		p=CreatNode();
		if(head==NULL) head=p; 
		else pre->next=p; 
		pre=p;
	} 
}  

