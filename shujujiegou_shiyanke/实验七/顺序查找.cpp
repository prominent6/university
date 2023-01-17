#include <stdio.h>
#define MaxSize 100
typedef int DataType;
typedef struct{
	DataType list[MaxSize]={9,13,15,7,45,32,56,89,60,36};
	int size; 
} SeqList;

//À≥–Ú≤È’“ 
int SeqSearch(SeqList *R,DataType k)
{
	int i=0;
	while(i<R->size &&R->list[i]!=k)
	{
		i++;
	}
	if(i>=R->size) return -1;
	else 
	{
		return i;
	}
}

int main(){
	SeqList myList;
	myList.size=10; 
	int n;
	scanf("%d",&n);
	int res=SeqSearch(&myList,n);
	if(res==-1) printf("not found!");
	else printf("%d",res);
	return 0;
} 
