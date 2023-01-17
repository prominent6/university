#include <stdio.h>
#define M 3
#define N 4
int main(void){
	int a[M][N];
	printf("«Î ‰»Î3*4æÿ’Û£∫\n"); 
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int max=a[0][0];
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			if(a[i][j]>max){
				max=a[i][j];
			}
		}
	}
	printf("max value is %d\n",max);
	return 0;
}
