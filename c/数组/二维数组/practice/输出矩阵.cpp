#include <stdio.h>
int main(void){
	int a[5][5]={
		{1,1,1,1,1},{2,1,1,1,1},{3,2,1,1,1},{4,3,2,1,1},{5,4,3,2,1}
	}; 
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
