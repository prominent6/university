#include <stdio.h>
#include <stdlib.h>
struct link{
	int data;
	struct link* next;
};
struct link* creatNode(struct link* head,int nodeData){
	struct link* p=head,*pr=head;
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
		while(pr->next!=NULL){
			pr=pr->next;
		}
		pr->next=p;
	}
	return head;
}
struct link* deleteNode(struct link* head,int nodeDate){
	struct link *p=head,*pr=head;
	if(head==NULL){
		return head;
	}else{
		while(nodeDate!=p->data&&p->next!=NULL){
			pr=p;
			p=p->next;
		}
		if(p->data==nodeDate){
			if(p==head){
				head=p->next;
			}
			else{
				pr->next=p->next;
			}
			free(p);
		}else{
			printf("no found!\n");
		}
	}
	return head;
}

void displayNode(struct link* head){
	struct link* p=head;
	while(p){
		printf("%d ",p->data);
		p=p->next;
	}
}
int main(void){
	struct link *list=NULL;
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		list=creatNode(list,i);
	} 
	for(int i=1;i<=n;i++){
		if(i%m==0){
			deleteNode(list,i);
		}
	}
	displayNode(list);
}
