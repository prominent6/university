//#include <stdio.h>
//#include <stdlib.h>
//
//struct link{
//	int date;
//	struct link* next;
//};
//
//struct link* createList(){
//	struct link* headNode=(struct link*)malloc(sizeof(struct link));
//	headNode->next=NULL;
//	return headNode; 
//}
////struct link* Input(struct link* headNode){
////	int date;
////	for(int i=0;i<6;i++){
////		scanf("%d",&date); 
////		struct link* last=headNode;
////		struct link* p=(struct link*)malloc(sizeof(struct link));
////		if(p){
////			p->date=date;
////			p->next=NULL;
////		}
////		if(headNode==NULL) headNode=p;
////		else{
////			while(last->next){
////				last=last->next;
////			}
////			last->next=p;
////		}
////	}
////	return headNode;
////}
//void Dispaly(struct link* headNode){
//	struct link* pMove=headNode->next;
//	while(pMove){
//		printf("%d ",pMove->date);
//		pMove=pMove->next;
//	}
//	printf("\n");
//}
//void Insert(struct link* head, int n)
//{
//	struct link* p = head;        
//	struct link* newNode = NULL;   //�������������һ���½ڵ�
//	newNode = (struct link*)malloc(sizeof(struct link));
//	while (p->next->date < n) //���ݴ�СѰ�Ҳ���λ��
//	{
//		p = p->next;
//	}
//	//�ҵ�������
//	newNode->next = p->next;//�µĽ��ָ���������һ�����
//	newNode->date = n;  //�½����Ҫ�������
//	p->next = newNode;   //��������һ�����ָ���µĽ��
//}
//
//int main(void){
//	struct link* list=createList();
//	int date;
//	for(int i=0;i<6;i++){
//		scanf("%d",&date); 
//	printf("��������6��Ԫ�ص�ֵ��\n");
//	list=Input(list); 
//	printf("�������������������Ϊ��");
//	Dispaly(list);
//	printf("����Ҫ���������x:");
//	int n;
//	scanf("%d", &n);
//	Insert(list, n);
//	printf("����������������������Ϊ��");
//	Dispaly(list);
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h>
struct link
{
	int num;
	struct link* next;
};
struct link* Input(struct link* head)    //��������--����������
{
	int i = 0;
	int data;
	for (i = 0; i < 6; i++)
	{
		scanf("%d", &data);
		//����һ���½ڵ�
		struct link* p = NULL, * last = head;
		p = (struct link*)malloc(sizeof(struct link));
		if (p)
		    {
				p->num = data;
				p->next = NULL;
			}
		if (head == NULL)   //��ԭ����Ϊ�գ����½��ڵ�Ϊͷ�ڵ�
			head = p;
		else
		{
			//�ҵ���һ���ڵ�
			while (last->next)
			{
				last = last->next;
			}
			//���½ڵ��������ĩβ
			last->next = p;
		}
	}
	return head;
}
void Dispaly(struct link* head)   //��������--��ӡ����
{ 
	struct link* p = head;
	while (p->next != NULL)
	{
		printf("%d  ", p->num);
		p = p->next;
	} 
	printf("%d\n", p->num); 
}
void Insert(struct link* head, int n)
{
	struct link* p = head;        
	struct link* newNode = NULL;   //�������������һ���½ڵ�
	newNode = (struct link*)malloc(sizeof(struct link));
	while (p->next->num < n) //���ݴ�СѰ�Ҳ���λ��
	{
		p = p->next;
	}
	//�ҵ�������
	newNode->next = p->next;//�µĽ��ָ���������һ�����
	newNode->num = n;  //�½����Ҫ�������
	p->next = newNode;   //��������һ�����ָ���µĽ��
}
int main()
{
	printf("��������6��Ԫ�ص�ֵ��\n");
	struct link* head = NULL;
	head = Input(head);
	printf("�������������������Ϊ��");
	Dispaly(head);
	printf("����Ҫ���������x:");
	int n;
	scanf("%d", &n);
	Insert(head, n);
	printf("����������������������Ϊ��");
	Dispaly(head);
}

