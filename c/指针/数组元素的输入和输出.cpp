//�����������β�����Ϊ�������ͣ����±귨��������Ԫ��
void InputArray(int a[],int n);
void OutputArray(int a[],int n);
void InputArray(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
 } 
void OutputArray(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%4d",a[i]);
	}
	printf("\n");
}

//�����������β�����Ϊָ���������ָ�뷨��������Ԫ��
void InputArray(int *pa,int n);
void OutputArray(int *pa,int n);
void InputArray(int *pa,int n)
{
	for(int i=0;i<n;i++,pa++)
	{
		scanf("%d",pa);
	}
 } 
void OutputArray(int a[],int n)
{
	for(int i=0;i<n;i++,pa++)
	{
		printf("%4d",*pa);
	}
	printf("\n");
}

//*�����������β�����Ϊ�������ͣ���ָ�뷨��������Ԫ��
void InputArray(int a[],int n);
void OutputArray(int a[],int n);
void InputArray(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%d",a+i);  //a+i�ȼ���&a[i] 
	}
} 
void OutputArray(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%4d",*(a+i));  //*(a+i)�ȼ���a[i] 
	 } 
	 printf("\n");
	 

//�����������β�����Ϊָ����������±귨��������Ԫ��
void InputArray(int *pa,int n);
void OutputArray(int *pa,int n);
void InputArray(int *pa,int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%d",&pa[i]);  //&p[i]�ȼ���p+i 
	}
 } 
void OutputArray(int *pa,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%4d",pa[i]);  //p[i]�ȼ���*(p+i) 
	}
	printf("\n");
}


//�β�����Ϊָ��������֪�Ķ�ά�������ָ��,����ά������Ϊһά���� 
void input(int (*p)[N],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",*(p+i)+j);
    }
}
void output(int (*p)[N],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf("%d",*(*(p+i)+j));
            printf("\n");
    }
}


//�β�����Ϊָ���ά�������ָ��
void input(int *p,int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&p[i*n+j]);
    }
}
void output(int *p,int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf("%d",p[i*n+j]);
            printf("\n");
    }
}


//��������
//*������������������:
//#include <stdio.h>
//int main(void)
//{
//	int a[5];
//	printf("Input five numbers:");
//	InputArray(a,5);
//	OutputArray(a,5);
//	return 0;
//}

//��ָ�������Ϊ�������� 
//#include <stdio.h>
//int main(void)
//{
//	int a[5];
//	int *p=a; 
//	printf("Input five numbers:");
//	InputArray(p,5);
//	OutputArray(p,5);
//	return 0;
//}
#include <stdio.h>
int main(void)
{
	int a[5],*p=NULL;
	printf("Input five numbers:");
	p=a;     //p=a�ȼ���p=&a[0] 
	for(int i=0;i<5;i++)
	{
		scanf("%d",&p[i]);  //&p[i]�ȼ���p+i 
	}
	p=a;    //���ٴ�ѭ��ǰ��ȷ��ָ��pָ�������׵�ַ 
	for(int i=0;i<5;i++)
	{
		printf("%4d",p[i]);  //p[i]�ȼ���*(p+i) 
	 } 
	 printf("\n");
	 return 0;
} 
