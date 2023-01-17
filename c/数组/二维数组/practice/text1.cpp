#include <stdio.h>
int main(void){
	int a[3][4];
	int b[3][4];
	int c[3][4];
	int i,j; 
	printf("Input array a(%d*%d)\n");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Input array b(%d*%d)\n");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("Output array a:\n");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	printf("Output array b:\n");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%4d",b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			if(a[i][j]==b[i][j]) c[i][j]=0;
			else if(a[i][j]>b[i][j]) c[i][j]=1;
			else c[i][j]=-1;
		}
	}
	printf("Output array c:\n");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%4d",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
