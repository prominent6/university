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
		while(pr->next){
			pr=pr->next;
		}
		pr->next=p;
	}
	return head;
}
void Display(struct link* head){
	struct link* p=head;
	while(p){
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
}
struct link* insertNode(struct link* head,int nodeData){
	struct link* p=head,*pr=head,*temp=NULL;
	p=(struct link*)malloc(sizeof(struct link));
	if(p==NULL){
		exit(0);
	}else{
		p->data=nodeData;
		p->next=NULL;
	}
	if(head==NULL){
		head=p;
	}else{
		while(pr->data<nodeData&&pr->next!=NULL){
			temp=pr;
			pr=pr->next;
		}
		if(pr->data>=nodeData){
			if(pr==head){
				p->next=head;
				head=p;
			}else{
				pr=temp;
			    p->next=pr->next;
			    pr->next=p;
			}	
		}else{
			pr->next=p;
		}
	}
	return head;
}
int main(void){
	struct link* list=NULL;
	printf("��������6��Ԫ�ص�ֵ��\n");
	int data;
	for(int i=0;i<6;i++){
		scanf("%d",&data);
		list=creatNode(list,data);
	}
	printf("�������������������Ϊ��");
	Display(list);
	printf("����Ҫ���������x:");
	int n;
	scanf("%d", &n);
	printf("%d ",list->data);
	list=insertNode(list, n);
	printf("����������������������Ϊ��");
	Display(list);
	return 0;
}
