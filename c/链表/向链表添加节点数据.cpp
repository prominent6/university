#include <stdio.h>
#include <stdlib.h>
struct link *AppendNode(struct link *head);
void DisplayNode(struct link *head);
void DeleteMemory(struct link *head);
struct link
{
	int data;
	struct link *next;
};
int main(void)
{
	int i=0;
	char c;
	struct link *head =NULL;  //����ͷָ��
	printf("Do you want to append a new node(Y/N)?");
	scanf(" %c",&c);
	while(c=='Y'||c=='y')
	{
		head =AppendNode(head);  //��headΪͷָ�������ĩβ��ӽڵ�
		DisplayNode(head);   //��ʾ��ǰ�����еĸ��ڵ���Ϣ
		printf("Do you want to append a new node(Y/N)?");
		scanf(" %c",&c);
		i++;
	}
	printf("%d new nodes have been apended!\n",i);
	DeleteMemory(head);     //�ͷ����еĶ�̬������ڴ� 
}
//�½�һ���ڵ㲢��ӵ�����ĩβ��������ӽڵ��������ͷָ��
struct link *AppendNode(struct link *head)
{
	struct link *p=NULL,*pr=head;
	int data;
	p=(struct link*)malloc(sizeof(struct link));  //��pָ���½��ڵ�
	if(p==NULL)  //��Ϊ�½��ڵ������ڴ�ʧ�ܣ����˳����� 
	{
		printf("�ڴ治����\n");
		exit(0);
	} 
	if(head==NULL)  //��ԭ����Ϊ�ձ� 
	{
		head=p; //���½��ڵ���Ϊͷ�ڵ� 
	 } 
	 else   //��ԭ����Ϊ�ǿգ����½��ڵ���ӵ���β 
	 {
	 	while (pr->next !=NULL)   //��δ����β�����ƶ�prֱ��prָ���β 
	 	{
	 		pr=pr->next;  //��prָ����һ���ڵ� 
		 }
		 pr->next=p;  //��ĩ�ڵ��ָ����ָ���½��ڵ� 
	  } 
	printf("Input node data:");
	scanf("%d",&data);
	p->data =data; //���½��ڵ��������ֵΪ����Ľڵ�����ֵ
	p->next=NULL;  //���½��ڵ���Ϊ��β 
 	return head; //������ӽڵ��������ͷָ�� 
}
//��ʾ�����е����нڵ�Ľڵ�ź͸ýڵ��е�����������
void DisplayNode(struct link*head)
{
	struct link*p=head;
	int j=1;
	while(p!=NULL)
	{
		printf("%5d%10d\n",j,p->data);
		p=p->next;
		j++;
	}
 } 
//�ͷ�headָ������������нڵ�ռ�õ��ڴ�
void DeleteMemory(struct link *head)
{
	struct link*p=head,*pr=NULL;
	while (p!=NULL)  //�����Ǳ�β�����ͷŽڵ�ռ�õ��ڴ� 
	{
		pr=p;   //��pr�б��浱ǰ�ڵ��ָ�� 
		p=p->next;  //��pָ����һ���ڵ� 
		free(pr); //�ͷ�prָ��ĵ�ǰ�ڵ�ռ�õ��ڴ� 
	}
}
