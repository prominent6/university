#include <stdio.h>
#include <stdlib.h>
typedef struct{ //客户的信息结构 
	int arrive;
	int treat;
} QNODE;
typedef struct node{
	QNODE data;
	struct node *next;//队列中的元素信息
}LNODE,*QueuePtr;

LNODE *front,*rear;    // 队头指针和队尾指针
QNODE temp,c; //暂存变量

//进队
void enQueue(QNODE c){
	QueuePtr p=(QueuePtr)malloc(sizeof(LNODE));
	if(!p) exit(0);
	p->data=c;
	p->next=NULL;
	rear->next=p;
	rear=p;
} 

//出队
int deQueue(QNODE *e)
{
	QueuePtr p;
	if(front==rear)
		return 0;
    *e=front->next->data; // 将欲删除的队头结点的值赋值给e
    p=front->next;				// 将欲删除的队头结点暂存给p
	front->next=front->next->next;
	if(rear==p)		// 若队头就是队尾，则删除后将rear指向头结点
		rear=front;
	free(p);
	return 1;
}
int main(void){	//设置统计初值：业务员等待时间，客户总等待时间，客户总人数
	int dwait=0,cwait=0,count=0,finish; 
	//设置当前时钟clock时间为0；//用变量clock来模拟当前时间
	int clock=0;
	
	FILE *fp;
	int have=0;
	if((fp=fopen("data.txt","r"))==NULL){
		printf("文件打开出错");
		return 0; 
	}
	
	//读入第一位客户信息于暂存变量中
	have=fscanf(fp,"%d %d",&temp.arrive,&temp.treat); //返回值等于从文件中一次读操作读出数据的个数，这里等于2

	//建造空队列
    front=rear=(QueuePtr)malloc(sizeof(LNODE));
    front->next=NULL;//防止指针乱指
    
	do{//约定每轮循环，处理完一位客户
		if(front==rear&&have==2) //等待队列为空(front==rear)，并且还有客户
		{   
			dwait+=(temp.arrive-clock); //累计业务员总等待时间；
		 	clock=temp.arrive; //时钟推进到暂存变量中的客户的到达时间；
		  	enQueue(temp); //暂存变量中的客户信息进队；
		  	have=fscanf(fp,"%d %d",&temp.arrive,&temp.treat); //读取下一位客户信息于暂存变量；
		}
		deQueue(&c);  	//从等待队列出队一位客户；
		count++; //累计客户人数；
		cwait+=(clock-c.arrive); //将该客户的等待时间累计到客户的总等待时间；//=当前时间-客户到达时间
		finish=(clock+c.treat); 	 //设定当前客户的业务办理结束时间
		while(temp.arrive<=finish&&have==2) //下一位客户的到达时间在当前客户处理结束之前，并且还有客户
		{
			enQueue(temp); //暂存变量中的客户信息进队；
		 	have=fscanf(fp,"%d %d",&temp.arrive,&temp.treat);//读取下一位客户信息于暂存变量；
		}
		clock=finish; //时钟推进到当前客户办理结束时间
	}while(have==2||front!=rear);//等待队列不为空(front!=reat)或者还有客户（have==2）
	
	printf("业务员等待时间:%d,客户平均等待时间：%f\n",dwait,(double)cwait/count);
	printf("模拟总时间: %d\n客户人数: %d\n客户总等待时间: %d\n",clock,count,cwait);
	printf("\n学号：2021211818 苏卓萱");
	return 0;
}
