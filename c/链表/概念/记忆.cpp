struct link* insertNode(struct link* head,int nodeData){
	struct link* p=head,*pr=head,*temp=NULL; 
	p=(struct link*)malloc(sizeof(struct link));  //让p指向待插入节点
	if(p==NULL){
		exit(0);
	} 
	p->data=nodeData;
	p->next=NULL;
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

struct link* deleteNode(struct link*head,int nodeDate){
	struct link* p=head,*pr=head;
	if(head==NULL){
		return head;
	}else{
		while(p->date!=nodeDate&&p->next!=NULL){
			pr=p;
			p=p->next;
		}
		if(p->date==nodeDate){
			if(head==p){
				head=p->next; 
			}else{
				pr->next=p->next;
			}
			free(p);
		}else{
			printf("no found");
		}
	}
	return head;
}
