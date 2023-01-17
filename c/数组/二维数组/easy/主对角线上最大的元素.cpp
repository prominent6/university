#include <stdio.h>
#define M 3
#define N 3
int main(void){
	int a[M][N];
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int max=a[0][0];
	int line=0;
	int j=0;
	for(int i=1;i<M;i++){
		j=i;
		if(max<a[i][j]){
			max=a[i][j];
			line=j;
		}
	}
	printf("max=%d ,row=%d",max,)
	return 0;
}
