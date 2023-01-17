//#include <stdio.h>
//#define M 2
//#define N 3
//int main(void){
//	int a[M][N],trans_a[N][M],i,j;
//	for(i=0;i<M;i++){
//		for(j=0;j<N;j++){
//			scanf("%d",&a[i][j]);
//		}
//	}
//	for(i=0;i<N;i++){
//		for(j=0;j<M;j++){
//			trans_a[i][j]=a[j][i];
//		}
//	}
//	for(i=0;i<N;i++){
//		for(j=0;j<M;j++){
//			printf("%d ",trans_a[i][j]);
//		}
//		printf("\n") ;
//	}
//	return 0;
//}

//º¯ÊıĞÎÊ½ 
#include <stdio.h>
#define M 2
#define N 3
void Trans_matrix(int a[M][N],int trans_a[N][M]);
int main(void){
	int a[M][N],trans_a[N][M],i,j;
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			scanf("%d",&a[i][j]);
		}
	}
	Trans_matrix(a,trans_a)
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			printf("%d ",trans_a[i][j]);
		}
		printf("\n") ;
	}
	return 0;
} 
void Trans_matrix(int a[M][N],int trans_a[N][M]){
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			trans_a[i][j]=a[j][i];
		}
	}
}
