#include <stdio.h>
#include <stdio.h>
/*
���ܣ�ͳ������a��������ż���ĸ���
������oddΪָ������������ָ��
   evenָ��ż��������ָ��
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
