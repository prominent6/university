#include <stdio.h>
#define M 10
#define N 10
//a为原数组，at为转置后 
void Transpose(int (*a)[N], int (*at)[M], int m, int n);
void InputMatrix(int (*a)[N], int m, int n);
void PrintMatrix(int (*at)[M], int n, int m);
int main(void){
	int m,n;
	int a[M][N],at[N][M]; 
	printf("Input m, n:");
	scanf("%d,%d",&m,&n); //m=3,n=4
	InputMatrix(a,m,n);
	Transpose(a,at,m,n);
	PrintMatrix(at,m,n);
}
void InputMatrix(int (*a)[N], int m, int n){
	printf("Input %d*%d matrix:\n",m,n);
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
//			scanf("%d",&a[i*n+j]);
			scanf("%d",*(a+i)+j);
		}
	} 
}
void Transpose(int (*a)[N], int (*at)[M], int m, int n){
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			*(*(at+j)+i)=*(*(a+i)+j); 
//			*at[i+j*m]=*a[i*n+j];
		}
	}
}
void PrintMatrix(int (*at)[M], int n, int m){
	int i,j;
	printf("The transposed matrix is:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",*(*(at+i)+j));
//            printf("%d\t",*at[i*n+j]);
		}
		printf("\n");
	} 
}

