#include <stdio.h>
#define MaxSize 100
typedef int DataType;
typedef struct{
	DataType list[MaxSize];
	int size; 
} SeqList;

void ListInitiate(SeqList *L)/*初始化顺序表L*/{
	L->size = 0;/*定义初始数据元素个数*/
}

//返回顺序表L的当前数据元素个数
int ListLength(SeqList L){
	return L.size; 
} 

//在顺序表L的位置i前插入数据元素值x
//插入成功返回1，插入失败返回0 
int ListInsert(SeqList *L,int i,DataType x){
	int j;
	if(L->size>=MaxSize){
		printf("顺序表已满无法插入！\n");
		return 0;
	}else if(i<0||i>L->size){  //这里范围限定错误找半天 
		printf("参数i不合法！\n");
	} 
	else{
		//为插入做准备
		for(j=L->size;j>i;j--) L->list[j]=L->list[j-1];
		L->list[i]=x;
		L->size++; 
		return 1;
	}
}

//删除顺序表L的位置i的数据元素值x并存放到参数x中 
//删除成功返回1，删除失败返回0
int ListDelete(SeqList *L,int i,DataType *x){
	int j;
	if(L->size<=0){
		printf("顺序表已空无数据可删！\n");
		return 0;
	}else if(i<0||i>L->size-1){
		printf("参数i不合法！\n");
		return 0;
	} 
	else{
		*x=L->list[i];
		for(j=i+1;j<L->size-1;j++) L->list[j-1]=L->list[j]; 
		L->size--;
		return 1;
	}
} 

//得到顺序表L中第i个数据元素的值存于x中
//删除成功返回1，删除失败返回0
int ListGet(SeqList L,int i,DataType *x){
	if(i<0||i>L.size-1){
		printf("参数i不合法！\n");
		return 0;
	}else{
		*x=L.list[i];
		return 1;
	}
}

int main(void)
{ 
	SeqList myList;
	int i , x;
	ListInitiate(&myList);
	for(i = 0; i < 10; i++) ListInsert(&myList, i, i+1);
	ListDelete(&myList, 4, &x);
	for(i = 0; i < ListLength(myList); i++)
	{
		ListGet(myList,i,&x);
		printf("%d", x);
	}
	printf("\n学号：2021211818 苏卓萱");
	return 0;
}
