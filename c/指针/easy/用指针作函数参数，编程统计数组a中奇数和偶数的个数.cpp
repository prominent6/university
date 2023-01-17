#include <stdio.h>
#include <stdio.h>
/*
功能：统计数组a中奇数和偶数的个数
参数：odd为指向奇数个数的指针
   even指向偶数个数的指针
*/
void f(int a[], int *odd, int *even)
{
	int i;
	for(i=0;i<20;i++){
		if(a[i]%2==0) (*even)++;
		else (*odd)++;
	}
}
int main(void){
	int a[20], i, odd = 0, even = 0;
	printf("input 20 numbers:");
    for(i=0;i<20;i++){
    	scanf("%d",&a[i]);
	}
	f(a,&odd,&even);
    printf("Odd numbered=%d,Even numbered=%d\n", odd, even);
    return 0;
}
