//从head指向的链表中删除一个节点，返回删除节点后的链表的头指针
struct link *DeleteNode(struct link*head,int nodeData)
{
	struct link*p=head,*pr=head;
	if(head==NULL)   //若链表为空表，则退出程序 
	{
		printf("为空链表！\n");
		return (head);
	}
	while(nodeData !=p->data&&p->next !=NULL)   //未找到且未到表尾 
	{
		pr=p;
		p=p->next;
	}
	if(nodeData==p->data)  //若当前节点的节点值为nodeData,找到待删除的节点 
	{
		if(p==head)   //若待删节点为头节点 
		{
			head=p->next; //让头指针指向待删除节点p的下一节点 
		}
		else   //若待删节点不是头节点 
		{
			pr->next=p->next;   //让前一节点的指针域指向待删节点的下一个节点 
		 } 
		 free(p); 
	 } 
	 else   //找到表尾仍为未发现节点值为nodeData的节点 
	 {
	 	printf("未找到待删节点！\n");
	 }
	 return head; 
 } 
