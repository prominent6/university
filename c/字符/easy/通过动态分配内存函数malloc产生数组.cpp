#include <stdio.h>
#include <stdlib.h>
int main(void){
	int n,i;
	int* p; //
	printf("Enter array size:");
	scanf("%d", &n);
	p=(int*)malloc(n*sizeof(int));
	for (i = 0; i < n; i++)
	{
		p[i] = 10 * i;
		printf("array[%d]=%d\n", i , *(p + i));
	}
}

