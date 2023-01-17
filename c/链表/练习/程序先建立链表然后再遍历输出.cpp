#include <stdio.h>
#include <stdlib.h>
struct link{
	int data;
	struct link* next;
};

struct link* createLink(){
	struct link* p=(struct link*)malloc(sizeof(struct link));
	p->next=NULL;
}
struct link* creatNode(struct link* head,int nodeData){
	struct link* p=head,*pr=head;
	p=(struct link*)malloc(sizeof(struct link));
	if(p==NULL){
		exit(0);
	} else{
		p->data=nodeData;
		p->next=NULL;
	}
	if(head==NULL){
		head=p;
	}else{
		while(pr->next!=NULL){
			pr=pr->next;
		}
		pr->next=p;
	}
	return head;
}
void displayList(struct link* head){
	struct link* p=head->next;
	while(p){
		printf("%d ",p->data);
		p=p->next;
	}
}
int main(void){
	struct link* list=createLink();
	printf("输入数组%d个元素的值。\n",6);
	int data;
	for(int i=0;i<6;i++){
		scanf("%d",&data);
		list=creatNode(list,data);
	}
	printf("此链表各个结点的数据域为：");
	displayList(list);
	return 0;
}
