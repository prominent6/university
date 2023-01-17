#include <stdio.h>
#define M 3
#define N 3
int main(void){
	int a[M][N];
	int sumh[3],suml[3],diagSum1=0,diagSum2=0;
	int isMagic=1;
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<M;i++){
		sumh[i]=0;  //
		for(int j=0;j<N;j++){
			sumh[i]+=a[i][j];
		}
	}
	for(int i=0;i<M;i++){
		suml[i]=0;
		for(int j=0;j<N;j++){
			suml[i]+=a[j][i];
		}
	}
	for(int i=0;i<M;i++){
		diagSum1+=a[i][i];
	}
	for(int i=0;i<M;i++){ 
		diagSum2+=a[i][M-1-i];
	}
	if(diagSum1!=diagSum2){
		isMagic=0;
	}else {
		for(int i=0;i<3;i++){
			if((sumh[i]!=diagSum1)||(suml[i]!=diagSum1)) isMagic=0;
		}
	}
	if(isMagic) printf("It is a magic square!\n");
	else printf("It is not a magic square!\n");
	return 0; 
}

