#include <stdio.h>
#define N 5
int main(void)
{
	int score[N];
	int i,count=0;
	printf("Input the scores of %d students:\n",N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&score[i]);
		if(score[i]<60) count ++;
	}
	printf("%d",count);
	return 0;
}
