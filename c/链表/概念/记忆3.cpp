struct link* deleteMemory(struct link* head){
	while(p!=NULL){
		pr=p;
		p=p->next;
		free(pr);
	}
	return head=NULL;
}
