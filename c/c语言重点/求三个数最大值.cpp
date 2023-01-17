#include <stdio.h>
int Max(int m,int n);
int main(void){
	int m,n,x;
	scanf("%d,%d,%d",&m,&n,&x);
//	int max,result; 
//	max=Max(m,n); 
//	result=Max(max,x);
    int max= Max(m,n);
    int result=Max(max,x);
    //¶¼¿ÉÒÔ 
	printf("%d",result);
	return 0;
}
int Max(int m,int n)
{
	int t;
	t=m>n?m:n;
	return t;
}
