#include <stdio.h>
int main(void){
	int a[3][5]={
	{80,80,80,80,80},
	{90,90,90,90,90},
	{70,70,70,70,70},
	};
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<5;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
