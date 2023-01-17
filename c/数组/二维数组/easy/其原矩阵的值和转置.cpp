#include <stdio.h>
#define M 10
#define N 10
int main(void){
	int n;
	int a[M][N];
	int b[M][N];
	printf("please input n:");
	scanf("%d",&n);
	printf("转置前：\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			a[i][j] = n* i + j + 1;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%-4d",a[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			b[j][i]=a[i][j];
		}
	}
	printf("转置后：\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%-4d",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
