#include <stdio.h>
#define ARR_SIZE 12
void YHTriangle(int a[][ARR_SIZE],int n);
void PrintYHTriangle(int a[][ARR_SIZE],int n); 
int main(void){
	int n;
	scanf("%d",&n);
	int a[ARR_SIZE][ARR_SIZE];
	YHTriangle(a,n);
	PrintYHTriangle(a,n); 
}
void YHTriangle(int a[][ARR_SIZE],int n){
	//置第一列和对角线为1 
	for(int i=0;i<n;i++){
		a[i][0]=1;
		a[i][i]=1;
	}
//	计算其他矩阵元素 
	for(int i=2;i<n;i++){
		for(int j=1;j<=i-1;j++){
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	} 
}
void PrintYHTriangle(int a[][ARR_SIZE],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){  //只输出左下部分 
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
}
