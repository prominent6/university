#include <stdio.h>
#define M 5
#define N 5
int main(void){
	int a[M][N];
	int sum=0;
	printf("Input a 5*5 matrix\n");
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<M;i++){
		int j=i;
		sum+=a[i][j];
	}
	for(int i=4;i>=0;i--){
		int j=4-i;
		if(j==i) continue;  //ÅÅ³ıÖØ¸´Çé¿ö 
		sum+=a[j][i];
	}
	printf("sum=%5d\n",sum);
	return 0;
}
