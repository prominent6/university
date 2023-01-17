#include <stdio.h>
#include <stdlib.h>
struct link{
	int data;
	struct link* next;
};
struct link* creatNode(struct link* head,int nodeData){
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
		//Ë³Ðò
		while(pr->data<nodeData&&pr->next!=NULL){
			temp=pr;
			pr=pr->next;
		} 
		if(pr->data>=nodeData){
			if(head=pr){
				
			}
		}
//		//²åµ½Ä©Î² 
//		while(pr->next!=NULL){
//			pr=pr->next; 
//		}
//		pr->next=p;
	}
}
int main(void){
	struct link* list=NULL;
	
}
