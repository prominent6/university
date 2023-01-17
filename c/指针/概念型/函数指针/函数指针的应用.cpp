#include <stdio.h>
#define N 40
int ReadScore(int score[]);
void PrintScore(int score[],int n);
void SelectionSort(int a[],int n,int (*compare)(int a,int b)); 
//这就是函数指针，指向一个函数 
int Ascending(int a,int b);
int Descending(int a,int b);
void Swap(int *x, int *y);
int main(void)
{
	int score[N],n;
	int order;              //值为1表示升序排序，值为2表示降序排序 
	n=ReadScore(score);  //输入成绩，返回学生人数 
	printf("学生总数：%d\n",n);
	printf("1 or 2:");
	scanf("%d",&order);    
	printf("排序前:\n");
	PrintScore(score,n);
	if(order==1)          //
	{
		SelectionSort(score,n,Ascending); //函数指针指向Ascending()
		printf("升序排序后：\n"); 
	}
	else 
	{
		SelectionSort(score,n,Descending); //函数指针指向Descending()
		printf("降序排序后：\n");
	}
	PrintScore(score,n);
	return 0;
}

// 输入学生某门课的成绩，当输入负值时，结束输入，返回学生人数 
int ReadScore(int score[])
{
	int i=-1;
	do
	{
		i++;
		printf("输入成绩：");
		scanf("%d",&score[i]);  
	}while(score[i]>=0);
	return i;
}

//输出学生成绩 
void PrintScore(int score[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%4d",score[i]);
	}
	printf("\n");
}

//调用函数指针 compare 指向的函数实现对数组a的交换法排序 
void SelectionSort(int a[],int n,int (*compare)(int a,int b))
{
	int k;
	for(int i=0;i<n-1;i++)
	{
		k=i;
		for(int j=i+1;j<n;j++)
		{
			if((*compare)(a[j],a[k])) k=j;     //
 		}
		if(k!=i) Swap(&a[k],&a[i]);  //
	}
	
}

//使数据升序排序 
int Ascending(int a,int b)   
{
	return a<b; // 
}
int Descending(int a,int b)  
{
	return a>b;  // 
}

//两整数值互换 
void Swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
