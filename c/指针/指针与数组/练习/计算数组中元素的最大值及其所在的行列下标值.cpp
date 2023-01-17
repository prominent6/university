#include <stdio.h>
#define M 10
#define N 10
void InputArray(int *p,int m,int n);
int FindMax(int *p,int m,int n,int *pRow,int *pCol);
int main(void){
	int m,n;
	int pr,pc;
	int arr[M][N];
	printf("Input m, n:");
	scanf("%d,%d",&m,&n);
//	InputArray(arr,m,n);  //错误
	InputArray(*arr,m,n); //
	int max=FindMax(*arr,m,n,&pr,&pc);
	printf("max = %d, row = %d, col = %d\n",max,pr,pc);
	return 0;
}

/* 函数功能：输入m*n矩阵的值 */
void InputArray(int *p,int m,int n){
	int i,j;
	printf("Input %d*%d array:\n",m,n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&p[i*n+j]); //
		}
	}
}

int FindMax(int *p,int m,int n,int *pRow,int *pCol){
	int i,j;
	int max=p[0];
	*pRow=0;
	*pCol=0;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(p[i*n+j]>max){
				max=p[i*n+j];
				*pRow=i;
				*pCol=j;
			}
		}
	}
	return max;
}
