#include <stdio.h>
#define N 40
int ReadScore(int score[]);
void PrintScore(int score[],int n);
void SelectionSort(int a[],int n,int (*compare)(int a,int b)); 
//����Ǻ���ָ�룬ָ��һ������ 
int Ascending(int a,int b);
int Descending(int a,int b);
void Swap(int *x, int *y);
int main(void)
{
	int score[N],n;
	int order;              //ֵΪ1��ʾ��������ֵΪ2��ʾ�������� 
	n=ReadScore(score);  //����ɼ�������ѧ������ 
	printf("ѧ��������%d\n",n);
	printf("1 or 2:");
	scanf("%d",&order);    
	printf("����ǰ:\n");
	PrintScore(score,n);
	if(order==1)          //
	{
		SelectionSort(score,n,Ascending); //����ָ��ָ��Ascending()
		printf("���������\n"); 
	}
	else 
	{
		SelectionSort(score,n,Descending); //����ָ��ָ��Descending()
		printf("���������\n");
	}
	PrintScore(score,n);
	return 0;
}

// ����ѧ��ĳ�ſεĳɼ��������븺ֵʱ���������룬����ѧ������ 
int ReadScore(int score[])
{
	int i=-1;
	do
	{
		i++;
		printf("����ɼ���");
		scanf("%d",&score[i]);  
	}while(score[i]>=0);
	return i;
}

//���ѧ���ɼ� 
void PrintScore(int score[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%4d",score[i]);
	}
	printf("\n");
}

//���ú���ָ�� compare ָ��ĺ���ʵ�ֶ�����a�Ľ��������� 
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

//ʹ������������ 
int Ascending(int a,int b)   
{
	return a<b; // 
}
int Descending(int a,int b)  
{
	return a>b;  // 
}

//������ֵ���� 
void Swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
