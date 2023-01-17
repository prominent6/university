//p为当前节点，pre指向前一个节点 
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
struct link  //为申请节点的类型 
{
	int data;
	struct link *next;
};
//创建节点 ，返回值为节点的地址 
struct link *CreatNode()
{
	//申请节点所需内存
	struct link *p; 
	//赋值类型要一致，强制转换，右边原类型为void*——>什么类型都可以 
	p=(struct link*) malloc(sizeof(struct link));
	
	//申请失败，退出程序
	if(p==NULL){
		printf("no enough memory to alloc");
		exit(0);
	} 
	
	//为新建节点赋值
	p->next=NULL; //新建的节点指针域赋空指针 
	 
	//存入数据 
	printf("input:\n");
	scanf("%d",&(p->data)); //通过p找到data ,p不等于节点 
	p->next=NULL;
	return p;
}


//创建链表
struct link*createlist(void){
	struct link *head=NULL,; //开始为空链表
	struct link *p=NULL，*pre=NULL;
	char c;
	printf("开始！");
	do{ 
		printf("\n'y' to insert one new node,'n' to finish: ");
		scanf(" %c",&c);
		//...
		//1. 创建节点
		p=CreatNode();
		//2. 把节点链到链表里
		if(head==NULL) head=p;  //如果是第一个节点，将新节点链至头节点后
		else pre->next=p;  //不是第一个节点，将新建节点接到链表的结尾pre处
		pre=p;   //让pre永远指向p的前一个节点，为下一次链入做准备 
	}while(1);
}  

//输出创建的链表
void PrintList(struct link *head){
	struct link *p;
	p=head;
	if(head==NULL) //判断是否为空链表
	{
		prinf("..."); 
	}else {
		while(p!=NULL){
			printf("%5d\n",p->data);
			p=p->next;
		}
	} 
} 

//释放内存 在p时释放pre的内存 
struct link *DeleteMemory(struct link *head){
	struct link *p=head,*pre=NULL;
	while(p!=NULL){
		pre=p;
		p=p->next;
		free(pre); 
	}
	return head=NULL;
} 


//在链表中插入节点 
