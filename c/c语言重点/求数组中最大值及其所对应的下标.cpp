#include <stdio.h>
#define N 5
int FindMax(int a[],int n);
int main(void)
{
	int score[N]={};
	printf("max=%d\n",FindMax(score,N));
	return 0;
}
int FindMax(int a[],int n)
{
	int max=a[0],max_i; //��a[0]ֵΪ��ǰ���ֵ 
	for(int i=1;i<n;i++)
	{
		if(a[i]>max) {
		max=a[i];
			max_i=i;
	}
	}
	//return max;
	return max_i;
}

