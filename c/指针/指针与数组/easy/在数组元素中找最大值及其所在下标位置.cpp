#include <stdio.h>
#define N 10
int FindMax(int num[], int n, int *pMaxPos);
main()
{
	int num[N], maxValue, maxPos, minValue, minPos, i;	
	printf("Input %d numbers:\n",N);
	for (i=0; i<N; i++)
	{
		scanf("%d", &num[i]);                  
	}                        
	maxValue = FindMax(num, N, &maxPos);  
	printf(" Max=%d, Position=%d\n",	 maxValue, maxPos);    
}
int FindMax(int num[], int n, int *pMaxPos)  
{
	int i, max = num[0];
	*pMaxPos=0; //
	for (i=1; i<n; i++)
	{
		if (num[i] > max)
		{
			max = num[i];
			*pMaxPos = i;
		}
	} 	
	return max;
}

