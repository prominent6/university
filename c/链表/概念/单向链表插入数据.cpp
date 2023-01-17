//在已按升序排序的链表中插入一个节点，返回插入节点后的链表头指针
struct link*InsertNode(struct link*head,int nodeData)
{
	struct link*pr=head,*p=head,*temp=NULL;
	p=(struct link*)malloc(sizeof(struct link));  //让p指向待插入的节点
	if(p==NULL)   //若为新建节点申请内存失败，则退出程序  
	{
		printf("内存不够！\n");
		exit(0);
	} 
	p->next=NULL;   //为待插入节点的指针域赋值为空指针
	p->data =nodeData;  //为待插节点数据域赋值为nodeData
	if(head == NULL)     //若原链表为空表 
	{
	    head == p;  //待插入节点作为头节点 
	} 
	else    //若原链表为非空 
	{   //若未找到待插入节点的位置且未到表尾，则继续找 
	  	while(pr->data<nodeData&&pr->next!=NULL)
	  	{
	  		temp=pr;   //在temp中保存当前节点的指针
			pr=pr->next;  //pr指向当前节点的下一个节点 
		}
		if(pr->data>=nodeData)
		{
			if(pr==head) //若在头节点前插入新节点 
			{
				p->next = head; //将新节点的指针域指向原链表的头节点 
				head=p;//让head指向新节点 
			}
			else  //若在链表中间插入新节点 
			{
				pr=temp; 
				p->next=pr->next;  //将新节点的指针域指向下一个节点
				pr->next=p; //让前一节点的指针域指向新节点 
			}
		}
		else //若在表尾插入新节点
		{
			pr->next = p;  //让末节点的指针域指向新节点 
		 } 
	   } 
	return head;
 } 
