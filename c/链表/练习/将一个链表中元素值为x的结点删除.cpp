#include <stdio.h>
#include <stdlib.h>
struct link{
	int data;
	struct link* next;
}; 
struct link* creatNode(struct link* head,int nodeData){
	struct link* p=head,*pr=head;
	p=(struct link*)malloc(sizeof(struct link));
	p->data=nodeData;
	p->next=NULL;
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
struct link* deleteNode(struct link* head,int nodeData){
	struct link* p=head,*pr=head;
	if(head==NULL){
		head=p;
	}else{
		while(p->data!=nodeData&&p->next!=NULL){
			pr=p;
			p=p->next;
		}
		if(p->data==nodeData){
			if(p=head){
				head=p->next;
			}else{
				pr->next=p->next;
			}
	    	free(p); 
		}
	}
	return head;
}
void printLink(struct link* head){
	struct link*p=head;
	while(p){
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
}
int main(void){
	struct link* list=NULL;
	printf("��������%d��Ԫ�ص�ֵ��\n",6);
	int data;
	for(int i=0;i<6;i++){
		scanf("%d",&data);
		list=creatNode(list,data);
	}
	printf("�������������������Ϊ��");
	printLink(list);
	printf("����Ҫɾ��������x: ");
	int n;
	scanf("%d", &n);
	deleteNode(list, n);
	printf("ɾ���������������������Ϊ��");
	printLink(list);
}
