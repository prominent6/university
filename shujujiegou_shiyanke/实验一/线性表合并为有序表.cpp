#include <stdio.h>
#define MaxSize 100
typedef int DataType;
typedef struct{
	DataType list[MaxSize];
	int size; 
} SeqList;

//��ʼ��˳���Ϊ����� 
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
//��ӡ˳��� 
void ListPrint(SeqList *L){
	int i;
	for(i = 0; i < L->size; i++)
	{
		printf("%d ", L->list[i]);
	} 
}
//�ϲ�Ϊ����� 
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
  	
  	printf("�������һ��˳���ĳ��ȣ�");
  	ListInitiate(&myList1);
  	printf("��һ��˳���");
	ListPrint(&myList1);
	
  	printf("\n������ڶ���˳���ĳ��ȣ�");
  	ListInitiate(&myList2);
	printf("�ڶ���˳���");
	ListPrint(&myList2); 
	
	myList.size=myList1.size+myList2.size;	
    Merge(&myList1, &myList2,&myList);
    printf("\n���պϳɵ�˳���Ϊ��\n");
    ListPrint(&myList); 
	printf("\nѧ�ţ�2021211818 ��׿��");
    return 0;
}
