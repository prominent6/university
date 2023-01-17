//写在一个循环里无法让计数器先输出，所以再写一个循环用来计数 

#include <stdio.h>
int main(void){
	int count=0;
//	int a[]={0}; 
	for(int a=1;a<=4;a++){
		for(int b=1;b<=4;b++){
			for(int c=1;c<=4;c++){
				if(a!=b&&a!=c&&b!=c){
					count++;
				}
			}
		}
	}
	printf("counter=%d\n",count);
	for(int i=1;i<=4;i++){
		for(int j=1;j<=4;j++){
			if(j==i) continue;
			for(int x=1;x<=4;x++){
				if(x==i||x==j){
					continue;
				} else {
				///	a[count]=100*i+10*j+x;
				    printf("%d%d%d ",i,j,x);
				    //count ++;
				}
				
			}
			
		}
	}
 
// for(int y=0;y<=count;y++){
// 	printf("%d ",a[y]);
// }
	return 0;
}
