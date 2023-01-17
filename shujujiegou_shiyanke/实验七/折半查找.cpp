#include <stdio.h>
#define MaxSize 100
typedef int DataType;
typedef struct{
	DataType list[MaxSize]={5,7,9,12,15,18,20,22,25,30,100};
	int size; 
} SeqList;

//折半查找  要有序 
int BinSearch(SeqList *R,DataType k)
{
	int low=0,high=R->size-1,mid,count=0;
	while(low<=high)
	{
		mid=(low+high)/2;
//		printf("第%d次查找：在[ %d ,%d]中找到元素R[%d]:%d\n ",++count,low,high,mid,R->list[mid]);
		if(R->list[mid]==k) return mid+1;
		if(R->list[mid]>k) high=mid-1;
		else low=mid+1;
	}
	return -1;
}
int main(){
	SeqList myList;
	myList.size=11; 
	int res1=BinSearch(&myList,12),res2=BinSearch(&myList,28);
	if(res1==-1) printf("12:not found!\n");
	else printf("%d:%d\n",12,res1);
	if(res2==-1) printf("28:not found!\n");
	else printf("%d:%d\n",28,res2);
	return 0;
} 
