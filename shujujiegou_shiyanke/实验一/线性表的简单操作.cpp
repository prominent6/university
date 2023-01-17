#include <stdio.h>
#define MaxSize 100
typedef int DataType;
typedef struct{
	DataType list[MaxSize];
	int size; 
} SeqList;

void ListInitiate(SeqList *L)/*��ʼ��˳���L*/{
	L->size = 0;/*�����ʼ����Ԫ�ظ���*/
}

//����˳���L�ĵ�ǰ����Ԫ�ظ���
int ListLength(SeqList L){
	return L.size; 
} 

//��˳���L��λ��iǰ��������Ԫ��ֵx
//����ɹ�����1������ʧ�ܷ���0 
int ListInsert(SeqList *L,int i,DataType x){
	int j;
	if(L->size>=MaxSize){
		printf("˳��������޷����룡\n");
		return 0;
	}else if(i<0||i>L->size){  //���ﷶΧ�޶������Ұ��� 
		printf("����i���Ϸ���\n");
	} 
	else{
		//Ϊ������׼��
		for(j=L->size;j>i;j--) L->list[j]=L->list[j-1];
		L->list[i]=x;
		L->size++; 
		return 1;
	}
}

//ɾ��˳���L��λ��i������Ԫ��ֵx����ŵ�����x�� 
//ɾ���ɹ�����1��ɾ��ʧ�ܷ���0
int ListDelete(SeqList *L,int i,DataType *x){
	int j;
	if(L->size<=0){
		printf("˳����ѿ������ݿ�ɾ��\n");
		return 0;
	}else if(i<0||i>L->size-1){
		printf("����i���Ϸ���\n");
		return 0;
	} 
	else{
		*x=L->list[i];
		for(j=i+1;j<L->size-1;j++) L->list[j-1]=L->list[j]; 
		L->size--;
		return 1;
	}
} 

//�õ�˳���L�е�i������Ԫ�ص�ֵ����x��
//ɾ���ɹ�����1��ɾ��ʧ�ܷ���0
int ListGet(SeqList L,int i,DataType *x){
	if(i<0||i>L.size-1){
		printf("����i���Ϸ���\n");
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
	printf("\nѧ�ţ�2021211818 ��׿��");
	return 0;
}
