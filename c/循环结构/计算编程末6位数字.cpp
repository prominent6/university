#include <stdio.h>
int Func(int n);
int Func(int n){
        int sum=0;
        for(int m=1,j=1;j<=n;j++){
            m*=j;
            sum =sum+m;
        }
        return sum;
}
int main(void){
	
    int count=0,n;
    printf("Input n:");
    scanf("%d",&n);
    if(n>0&&n<=10)
	{
        int sum=Func(n);          //调用函数 
        int sum1=sum;
		do{
        sum1/=10;
        count++;
        } while(sum1>=1);
        if(count>=6)   printf("%d",sum%1000000);   //输出末六位 
	    else           printf("%d",sum);
    } else {
        printf("Input error!\n");
    }
    
    return 0;
}
