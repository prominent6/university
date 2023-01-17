#include <stdio.h>
#include <stdlib.h>
struct link{
	int data;
	struct link* next;
};
//在表尾插入 
struct link* creatNode(struct link* head){
	struct link* p=(struct link*)malloc(sizeof(struct link));
	struct link* pr=head;
	int data;
	if(head==NULL){
		head=p;
	}else{
		while(pr->next!=NULL){
			pr=pr->next; //直到表尾 
		}
		pr->next=p; 
	}
	printf("input date");
	scanf("%d",&data);
	p->data=data;
	p->next=NULL;
	return head;
}
void DisplayNode(struct link* head){
	struct link *p=head;
	int j=1;
	while(p){
		printf("%5d%10d\n",j,p->data);
		p=p->next;
		j++;
	}
}

void DeleteMemory(struct link*head){
	struct link*p=head,*pr=NULL;
	while(p){
		pr=p;
		p=p->next;
		free(pr);
	}
}

struct link* DeleteNode(struct link*head,int nodeData){
	struct link *p=head,*pr=head;
	if(head==NULL){
		return head;
	} 
	while(nodeData!=p->data&&p->next!=NULL){
		pr=p;
		p=p->next;
	}
	if(nodeData==p->data){
		if(p==head){
			head=p->next;
		}
		else{
			pr->next=p->next;
		}
		free(p);
	}
	else{
		printf("no found");
	}
	return head;
}

struct link* InsertNode(struct link *head,int nodeDate){
	struct link *pr=head,*p=head,*temp=NULL;
	p=(struct link*)malloc(sizeof(struct link));
	if(p==NULL){
		exit(0);
	}
	p->next=NULL;
	p->data=nodeDate;
	if(head==NULL){
		head=p;
	}
	else{
		while(pr->data<nodeDate&&pr->next!=NULL){
			temp=pr;  //temp当前节点的指针 
			pr=pr->next; //pr指向当前节点的下一个节点 
		}
		if(pr->data>=nodeDate){
			if(pr==head){  //在头节点前插入新节点 
				p->next=head;
				head=p;
			}else{  //在链表中间 
				pr=temp; //pr就为插入位置的上一个 
				p->next=pr->next;
				pr->next=p;
			}
		}
		else{  //在表尾 
			pr->next=p;
		}
	}
	return head;
}
int main(void){
	int i=0;
	char c;
	struct link* head=NULL;
	printf("y/n?\n");
	scanf(" %c",&c);
	while(c=='Y'||c=='y'){
		head=creatNode(head);
		DisplayNode(head);
		printf("y/n?\n");
		scanf(" %c",&c);
		i++;
	}
	printf("%d add\n",i);
	DeleteMemory(head);
}
