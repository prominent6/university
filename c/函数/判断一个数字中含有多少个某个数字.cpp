#include<stdio.h>
int CountDigit(int m,int n);
int main(void)
{
    int m,n,count;
    printf("Input m,n:\n");
    scanf("%d,%d",&m,&n);
    //printf("%d",m);
    count=CountDigit(m,n);
    printf("%d\n",count);
    return 0;
}
int CountDigit(int m,int n)
{
    int count=0;
  //  for(m;m>0;)
    for(;m>0;count++)
    {
        if(m%10==n) m/=10;
        else continue;
    }
    return count;
}

