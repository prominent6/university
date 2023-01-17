#include <stdio.h>
#include <math.h>

int main(void){
	for(int i=1;i<=9;i++) {
		for(int j=1;j<=9;j++) {
			if(i!=j) {
				int k=i*1100+j*11;
				int m=sqrt(k);
				if(m*m==k) {
					printf("k=%d,m=%d",k,m);
					//break;
				}
			}
		}
	}
	return 0;
}
