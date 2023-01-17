//#include <stdio.h>
//#define M 10
//#define N 10
//void InputMatrix(int (*a)[N], int m, int n);
//void Transpose(int (*a)[N], int (*at)[M], int m, int n);
//void PrintMatrix(int (*at)[M], int n, int m);
//int main(void){
//	int m,n;
//	int s[M][N];
//	int st[M][N];
//	printf("Input m, n:");
//	scanf("%d,%d",&m,&n);
//	printf("Input %d*%d matrix:\n",m,n);
//	InputMatrix(s,m,n);
//	Transpose(s,st,m,n);
//	printf("The transposed matrix is:\n");
//	PrintMatrix(st,n,m);
//	return 0;
//}
//void InputMatrix(int (*a)[N], int m, int n){
//	for(int i=0;i<m;i++){
//		for(int j=0;j<n;j++){
//			scanf("%d",*(a+i)+j);
//		}
//	}
//}
//void Transpose(int (*a)[N], int (*at)[M], int m, int n){
//	for(int i=0;i<m;i++){
//		for(int j=0;i<n;j++){
//			*(*(at+j)+i)=*(*(a+i)+j);
//		}
//	}
//}
//void PrintMatrix(int (*at)[M], int n, int m){
//	for(int i=0;i<n;i++){ //�෴ 
//		for(int j=0;j<m;j++){
//			printf("%d\t",*(*(at+i)+j));
//		}
//		printf("\n");
//	}
//}

#include<stdio.h>
#define M 10
#define N 10
void Transpose(int (*a)[N], int (*at)[M], int m, int n);
void InputMatrix(int (*a)[N], int m, int n);
void PrintMatrix(int (*at)[M], int n, int m);
int main()
{
    int s[M][N],st[N][M],m,n;// 1 2 3 4 5 6 7 8 9
    printf("Input m, n:");
    scanf("%d,%d",&m,&n);
    InputMatrix(s,m,n);
    Transpose(s,st,m,n);
    printf("The transposed matrix is:\n");
    PrintMatrix(st,n,m);
    return 0;
}
void Transpose(int (*a)[N], int (*at)[M], int m, int n)
{
    int i,j;
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            *(*(at+j)+i)=*(*(a+i)+j);
}
void InputMatrix(int (*a)[N], int m, int n)
{
    int i,j;
    printf("Input %d*%d matrix:\n",m,n);
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            scanf("%d",*(a+i)+j);
}
void PrintMatrix(int (*at)[M], int n, int m)
{
    int i,j;
    for(i=0; i<n; i++)
    { 
        for(j=0; j<m; j++)
            printf("%d\t",*(*(at+i)+j));
        printf("\n");
    } 
}

