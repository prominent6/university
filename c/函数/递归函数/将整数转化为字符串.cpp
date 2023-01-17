#include<stdio.h>
void convert(int n); 
int main()
{
  int number; 
  printf("\n输入整数：");
  scanf("%d",&number);
  printf("\n输出是：");
  if(number<0)
  {
    putchar('-'); //先输出一个-号  
    number=-number;
  }
  convert(number);
  return 0;
}
void convert(int n) 
{ 
  int i;//定义整型变量 
  if((i=n/10)!=0)//递归
  {
    convert(i);
  }
  putchar(n%10+'0'); //
}

