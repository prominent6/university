#include  <stdio.h>
void ReadData(int a[], int n);
void PrintData(int a[], int n);
void MaxMinExchang(int a[], int n);
void Swap(int *x, int *y);
int main()
{
    int  a[10];    
    printf("Input 10 numbers:");
    ReadData(a, 10);
    MaxMinExchang(a,10);
    printf("Exchange results:");
    PrintData(a, 10);
    return 0;
}
/* �������ܣ���������a��n��Ԫ��ֵ */
void ReadData(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
/* �������ܣ��������a��n��Ԫ��ֵ */
void PrintData(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%5d", a[i]);
    }
    printf("\n");
}
/* �������ܣ�������a�е����������С��λ�û��� */
void  MaxMinExchang(int a[], int n)
{
    int  maxValue = a[0], minValue = a[0], maxPos = 0, minPos = 0;
    int  i;
    for (i = 1; i < n; i++)
    {
        if (a[i] > maxValue)
        {
            maxValue = a[i];
            maxPos = i;
        }
        if (a[i] < minValue)
        {
            minValue = a[i];
            minPos = i;
        }
    }
    Swap(&a[maxPos],&a[minPos]);
}
/* �������ܣ�������ֵ���� */
void  Swap(int *x, int *y)
{
    int  temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
