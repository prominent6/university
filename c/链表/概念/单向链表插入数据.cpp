//���Ѱ���������������в���һ���ڵ㣬���ز���ڵ�������ͷָ��
struct link*InsertNode(struct link*head,int nodeData)
{
	struct link*pr=head,*p=head,*temp=NULL;
	p=(struct link*)malloc(sizeof(struct link));  //��pָ�������Ľڵ�
	if(p==NULL)   //��Ϊ�½��ڵ������ڴ�ʧ�ܣ����˳�����  
	{
		printf("�ڴ治����\n");
		exit(0);
	} 
	p->next=NULL;   //Ϊ������ڵ��ָ����ֵΪ��ָ��
	p->data =nodeData;  //Ϊ����ڵ�������ֵΪnodeData
	if(head == NULL)     //��ԭ����Ϊ�ձ� 
	{
	    head == p;  //������ڵ���Ϊͷ�ڵ� 
	} 
	else    //��ԭ����Ϊ�ǿ� 
	{   //��δ�ҵ�������ڵ��λ����δ����β��������� 
	  	while(pr->data<nodeData&&pr->next!=NULL)
	  	{
	  		temp=pr;   //��temp�б��浱ǰ�ڵ��ָ��
			pr=pr->next;  //prָ��ǰ�ڵ����һ���ڵ� 
		}
		if(pr->data>=nodeData)
		{
			if(pr==head) //����ͷ�ڵ�ǰ�����½ڵ� 
			{
				p->next = head; //���½ڵ��ָ����ָ��ԭ�����ͷ�ڵ� 
				head=p;//��headָ���½ڵ� 
			}
			else  //���������м�����½ڵ� 
			{
				pr=temp; 
				p->next=pr->next;  //���½ڵ��ָ����ָ����һ���ڵ�
				pr->next=p; //��ǰһ�ڵ��ָ����ָ���½ڵ� 
			}
		}
		else //���ڱ�β�����½ڵ�
		{
			pr->next = p;  //��ĩ�ڵ��ָ����ָ���½ڵ� 
		 } 
	   } 
	return head;
 } 
