#include <stdio.h>
#define MaxSize 100
typedef int DataType;
typedef struct{
	DataType list[MaxSize];
	int size; 
} SeqList;

//初始化顺序表为有序表 
void ListInitiate(SeqList *L){
	int i;
	scanf("%d",&L->size);
  	for(i = 0; i < L->size; i++){
  		scanf("%d",&L->list[i]);
	}
    for(int i=0;i<L->size-1;i++)
        for(int j=i+1;j<L->size;j++)
        {
            if(L->list[j]<L->list[i])
            {
                int temp;
                temp=L->list[j];
                L->list[j]=L->list[i];
                L->list[i]=temp;
            }
        }
} 
//打印顺序表 
void ListPrint(SeqList *L){
	int i;
	for(i = 0; i < L->size; i++)
	{
		printf("%d ", L->list[i]);
	} 
}
//合并为有序表 
void Merge(SeqList *L1,SeqList *L2,SeqList *L3){
	int i=0,j=0,size=0;
	while(i!=L1->size&&j!=L2->size){
		if(L1->list[i]<=L2->list[j]){
			L3->list[size]=L1->list[i];
			i++;
		}else{
			L3->list[size]=L2->list[j];
			j++;
		}
		size++;
	}
	while(i!=L1->size){
		L3->list[size]=L1->list[i];
		i++;
		size++;
	}
	while(j!=L2->size){
		L3->list[size]=L2->list[j];
		j++;
		size++;
	}
}

int main(void)
{
	SeqList myList1;
	SeqList myList2;
	SeqList myList;
  	int x,i,j;
  	
  	printf("请输入第一个顺序表的长度：");
  	ListInitiate(&myList1);
  	printf("第一个顺序表：");
	ListPrint(&myList1);
	
  	printf("\n请输入第二个顺序表的长度：");
  	ListInitiate(&myList2);
	printf("第二个顺序表：");
	ListPrint(&myList2); 
	
	myList.size=myList1.size+myList2.size;	
    Merge(&myList1, &myList2,&myList);
    printf("\n最终合成的顺序表为：\n");
    ListPrint(&myList); 
	printf("\n学号：2021211818 苏卓萱");
    return 0;
}
