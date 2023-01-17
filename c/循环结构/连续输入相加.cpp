#include <stdio.h>
int main(void){
    int x=0,count=0,sum=0;
    scanf("%d",&x);
    while(x!=0){
        if(x>0){
        	sum+=x;
        	count++;
		} 
		scanf("%d",&x);
    }
    printf("sum = %d, count = %d\n",sum,count); 
    return 0;
}
