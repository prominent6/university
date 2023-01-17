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
//	struct link* newNode = NULL;   //用输入的数创造一个新节点
//	newNode = (struct link*)malloc(sizeof(struct link));
//	while (p->next->date < n) //根据大小寻找插入位置
//	{
//		p = p->next;
//	}
//	//找到插入点后
//	newNode->next = p->next;//新的结点指向插入点的下一个结点
//	newNode->date = n;  //新结点存放要插入的数
//	p->next = newNode;   //插入点的上一个结点指向新的结点
//}
//
//int main(void){
//	struct link* list=createList();
//	int date;
//	for(int i=0;i<6;i++){
//		scanf("%d",&date); 
//	printf("输入数组6个元素的值。\n");
//	list=Input(list); 
//	printf("此链表各个结点的数据域为：");
//	Dispaly(list);
//	printf("输入要插入的数据x:");
//	int n;
//	scanf("%d", &n);
//	Insert(list, n);
//	printf("插入后链表各个结点的数据域为：");
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
struct link* Input(struct link* head)    //函数功能--输入六个数
{
	int i = 0;
	int data;
	for (i = 0; i < 6; i++)
	{
		scanf("%d", &data);
		//创建一个新节点
		struct link* p = NULL, * last = head;
		p = (struct link*)malloc(sizeof(struct link));
		if (p)
		    {
				p->num = data;
				p->next = NULL;
			}
		if (head == NULL)   //若原链表为空，则新建节点为头节点
			head = p;
		else
		{
			//找到上一个节点
			while (last->next)
			{
				last = last->next;
			}
			//将新节点接入链表末尾
			last->next = p;
		}
	}
	return head;
}
void Dispaly(struct link* head)   //函数功能--打印链表
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
	struct link* newNode = NULL;   //用输入的数创造一个新节点
	newNode = (struct link*)malloc(sizeof(struct link));
	while (p->next->num < n) //根据大小寻找插入位置
	{
		p = p->next;
	}
	//找到插入点后
	newNode->next = p->next;//新的结点指向插入点的下一个结点
	newNode->num = n;  //新结点存放要插入的数
	p->next = newNode;   //插入点的上一个结点指向新的结点
}
int main()
{
	printf("输入数组6个元素的值。\n");
	struct link* head = NULL;
	head = Input(head);
	printf("此链表各个结点的数据域为：");
	Dispaly(head);
	printf("输入要插入的数据x:");
	int n;
	scanf("%d", &n);
	Insert(head, n);
	printf("插入后链表各个结点的数据域为：");
	Dispaly(head);
}

