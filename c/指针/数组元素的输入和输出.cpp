//被调函数的形参声明为数组类型，用下标法访问数组元素
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

//被调函数的形参声明为指针变量，用指针法访问数组元素
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

//*被调函数的形参声明为数组类型，用指针法访问数组元素
void InputArray(int a[],int n);
void OutputArray(int a[],int n);
void InputArray(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%d",a+i);  //a+i等价于&a[i] 
	}
} 
void OutputArray(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%4d",*(a+i));  //*(a+i)等价于a[i] 
	 } 
	 printf("\n");
	 

//被调函数的形参声明为指针变量，用下标法访问数组元素
void InputArray(int *pa,int n);
void OutputArray(int *pa,int n);
void InputArray(int *pa,int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%d",&pa[i]);  //&p[i]等价于p+i 
	}
 } 
void OutputArray(int *pa,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%4d",pa[i]);  //p[i]等价于*(p+i) 
	}
	printf("\n");
}


//形参声明为指向列数已知的二维数组的行指针,将二维函数变为一维函数 
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


//形参声明为指向二维数组的列指针
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


//主函数：
//*用数组名作函数参数:
//#include <stdio.h>
//int main(void)
//{
//	int a[5];
//	printf("Input five numbers:");
//	InputArray(a,5);
//	OutputArray(a,5);
//	return 0;
//}

//用指针变量作为函数参数 
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
	p=a;     //p=a等价于p=&a[0] 
	for(int i=0;i<5;i++)
	{
		scanf("%d",&p[i]);  //&p[i]等价于p+i 
	}
	p=a;    //在再次循环前，确保指针p指向数组首地址 
	for(int i=0;i<5;i++)
	{
		printf("%4d",p[i]);  //p[i]等价于*(p+i) 
	 } 
	 printf("\n");
	 return 0;
} 
