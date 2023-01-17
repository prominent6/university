#include <stdio.h>
#define N 10
void Transpose(int *a, int n);
void Swap(int *x, int *y);
void InputMatrix(int *a, int n);
void PrintMatrix(int *a, int n);
int main(void){
	int n;
	int a[N][N];
	printf("Input n:");
	scanf("%d",&n);
	InputMatrix(*a,n); //
	Transpose(*a,n);
	PrintMatrix(*a,n);
	return 0;
}
void InputMatrix(int *a, int n){
	printf("Input %d*%d matrix:\n",n,n);
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[n*i+j]);
		}
	} 
}
//´§Ä¦
 
void Transpose(int *a, int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){  //
			Swap(&a[n*i+j], &a[n*j+i]);  //
		}
	}
}
void PrintMatrix(int *a, int n){
	printf("The transposed matrix is:\n");
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",a[n*i+j]);
		}
		printf("\n");
	}
}
void  Swap(int *x, int *y)
{
    int  temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
