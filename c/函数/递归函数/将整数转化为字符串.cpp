#include<stdio.h>
void convert(int n); 
int main()
{
  int number; 
  printf("\n����������");
  scanf("%d",&number);
  printf("\n����ǣ�");
  if(number<0)
  {
    putchar('-'); //�����һ��-��  
    number=-number;
  }
  convert(number);
  return 0;
}
void convert(int n) 
{ 
  int i;//�������ͱ��� 
  if((i=n/10)!=0)//�ݹ�
  {
    convert(i);
  }
  putchar(n%10+'0'); //
}

