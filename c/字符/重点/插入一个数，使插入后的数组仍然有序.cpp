#include <stdio.h>
#include <stdlib.h>
#define N 10
void insert(int *a,int num)
{
	int i,j;
	for( i=0;i<=N;i++)    //�ӿ�ʼ�������,�ҵ���num�����ֵ 
	{
		if(num<*(a+i))
		break;
	}
   for(j=N+1;j>i;j--)        //��Ԫ��������������,��ɲ���Ķ��� 
   {
     *(a + j) = *(a + j - 1);
    }
    *(a + i) = num;
}
int main( )
{
    int a[N + 1], add_num;
    int *p;
    printf("������10���������� :\n ");
    for (int i = 0; i < N; i++)
        scanf("%d", &a[i]);
    printf("input inserting data: ");
    scanf("%d", &add_num);
    insert(a, add_num);
    for (int i = 0; i < N + 1; ++i)
    {
        printf("%5d", a[i]);
    }
    return 0;
}

