//��headָ���������ɾ��һ���ڵ㣬����ɾ���ڵ��������ͷָ��
struct link *DeleteNode(struct link*head,int nodeData)
{
	struct link*p=head,*pr=head;
	if(head==NULL)   //������Ϊ�ձ����˳����� 
	{
		printf("Ϊ������\n");
		return (head);
	}
	while(nodeData !=p->data&&p->next !=NULL)   //δ�ҵ���δ����β 
	{
		pr=p;
		p=p->next;
	}
	if(nodeData==p->data)  //����ǰ�ڵ�Ľڵ�ֵΪnodeData,�ҵ���ɾ���Ľڵ� 
	{
		if(p==head)   //����ɾ�ڵ�Ϊͷ�ڵ� 
		{
			head=p->next; //��ͷָ��ָ���ɾ���ڵ�p����һ�ڵ� 
		}
		else   //����ɾ�ڵ㲻��ͷ�ڵ� 
		{
			pr->next=p->next;   //��ǰһ�ڵ��ָ����ָ���ɾ�ڵ����һ���ڵ� 
		 } 
		 free(p); 
	 } 
	 else   //�ҵ���β��Ϊδ���ֽڵ�ֵΪnodeData�Ľڵ� 
	 {
	 	printf("δ�ҵ���ɾ�ڵ㣡\n");
	 }
	 return head; 
 } 
