#include <stdio.h>
#define N 5

int ReadScore(int score[],long num[]);
//void DataSort1(int score[],int n,long num[]); //以分数为键值 
void DataSort2(int score[],int n,long num[]); //以学号为键值  
void PrintSort(int score[],int n,long num[]);
int LinSearch(long num[],long x,int n);
int main(void)
{
	int score[N],n,pos;   //得下标 
	long num[N],x;
	n=ReadScore(score,num);
	printf("学生总数为%d\n",n);
	DataSort2(score,n,num);
	printf("排序后的成绩："); 
	PrintSort(score,n,num);
    printf("Input the searching ID:");
    scanf("%ld",&x);
    pos=LinSearch(num,x,n);
    if(pos!=-1)
	{
		printf("score=%d\n",score[pos]);
	 } 
	 else 
	 {
	 	printf("not found!\n");
	  } 
	return 0;
}
int ReadScore(int score[],long num[])
{
	int i=-1;
	do
	{
		i++;
		printf("输入学号和成绩：");
		scanf("%ld%d",&num[i],&score[i]);  //以长整型格式输入学号 
	}while(num[i]>0&&score[i]>=0);
	return i;
}
//void DataSort1(int score[],int n,long num[])
//{
////	//交换法
////	int temp;
////	for(int i=0;i<n-1;i++)
////	{
////		for(int j=i+1;j<n;j++)
////		{
////			if(score[j]>score[i])
////			{
////				temp=score[j];
////				score[j]=score[i];
////				score[i]=temp;
////			}
////		}
////	} 
//	//选择法
//	int temp1,temp2,t;
//	for(int i=0;i<n-1;i++)
//	{
//		t=i;
//		for(int j=i+1;j<n;j++)
//		if(score[j]>score[t]) t=j;
//		
//		if(t!=i)
//		{
//			temp1=score[i];
//			score[i]=score[t];
//			score[t]=temp1;
//			
//			//交换学号
//			temp2=num[i];
//			num[i]=num[t];
//		    num[t]=temp2;
//		}
//	} 
//}
void DataSort2(int score[],int n,long num[])
{
		//选择法
	int temp1,temp2,t;
	for(int i=0;i<n-1;i++)
	{
		t=i;
		for(int j=i+1;j<n;j++)
		if(num[j]<num[t]) t=j;
		
		if(t!=i)
		{
			temp1=num[i];
			num[i]=num[t];
			num[t]=temp1;
			
			//交换成绩  
			temp2=score[i];
			score[i]=score[t];
			score[t]=temp2;
		}
	} 
}
void PrintSort(int score[],int n,long num[])
{
	for(int i=0;i<n;i++)
	{
		printf("%10ld %d ",num[i],score[i]);
	}
	printf("\n");
}
int LinSearch(long num[],long x,int n)
{
//	//线性查找法 
//	for(int i=0;i<n;i++)
//	{
//		if(num[i]==x) return i;
//		
//	}
//	return -1;
	//折半查找法 
	int low=0,high=n-1,mid;
	while(low<=high)
	{
		mid=low+(high-low)/2;  //防止数值溢出  
		if(x>num[mid]) low=mid+1;
		else if(x<num[mid]) high=mid-1;
		else return mid;
	}
	return -1;

}
