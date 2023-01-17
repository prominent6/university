//假设以带头结点的循环链表表示列队，并且只设一个指针指向队尾元素结点（注意不设头指针），
//试编写相应的置空队、判队空、入队和出队等算法。
#include <stdio.h>
#include <stdlib.h>
 
typedef int elemType;
typedef struct queuenode
{
	elemType data;
	struct queuenode *next;
}queuenode,*LinkQueue;
 
typedef struct
{
	LinkQueue rear;  //只设一个指向队尾元素的指针 
	int length;
}sqqueue;
 
/*初始化列队*/
void initQueue(sqqueue &Q)
{
	Q.rear=(LinkQueue)malloc(sizeof(Q));
	Q.rear->next=Q.rear;
}
/*置空队*/ 
int emptyQueue(sqqueue &Q)
{
	if(Q.rear->next==Q.rear)  //将队尾指针指向头结点 
		return 1;
	else
		return 0;
}
/*入队*/
int enqueue(sqqueue &Q,elemType e)
{   /*在尾结点处插入元素*/
	LinkQueue p;
	p=(LinkQueue)malloc(sizeof(Q));  //申请新结点 
	if(!p)
		return 0;
	/*初始化新结点并链入*/ 
	p->data=e;
	p->next=Q.rear->next;
	Q.rear->next=p;
	Q.rear=p;  //将尾指针移至新结点 
	return 1;
}
/*出队*/
int delqueue(sqqueue &Q,elemType &e)
{
	LinkQueue p;
	if(Q.rear->next==Q.rear)
		return 0;  //若队列为空返回0
	p=Q.rear->next->next;  //循环链表队列队尾指针下一结点(也即头结点)的下一结点(即队头指针)赋给p 
	e=p->data;  // 保存结点中的数据 
	Q.rear->next->next=p->next;  //摘下结点p 
	free(p);   //释放被删结点 
	return 1;
}
 
int main()
{
	sqqueue m;
	elemType num;
	initQueue(m);
	if(emptyQueue(m))
		printf("该队列目前为空!\n");
	else
		printf("该队列不为空!\n");
	for(int i=1;i<=10;i++)
		{
			if(enqueue(m,i))
			printf("元素%d成功入列!\n",i);
		}
	printf("\n\n");
	for(int j=1;j<=10;j++)
		{
			if(delqueue(m,num))
			printf("元素%d成功出列!\n",num);
		}
	if(emptyQueue(m))
		printf("该队列目前为空!\n");
	else
		printf("该队列不为空!\n");
	return 0;
}
