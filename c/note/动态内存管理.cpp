//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(void)
//{
//	int *ptr=NULL;
//	int num,i;
//	
//	printf("shurugeshu");
//	scanf("%d",&num);
//	ptr = (int *)malloc(num*sizeof(int)); //申请内存空间 
//	
//	for(i=0;i<num;i++)
//	{
//		printf("di%dgeshu",i+1);
//		scanf("%d",&ptr[i]);
//	}
//	printf("shuchu");
//	for(i=0;i<num;i++)
//	{
//		printf("%d ",ptr[i]);
//		
//	}
//	putchar('\n');
//	free(ptr);  //释放内存 
//	return 0;
//}

//calloc()分配内存空间并初始化
//int *ptr = (int *)calloc(8,sizeof(int));

//malloc()分配内存空间并用memset()初始化
//int *ptr=(int *)malloc(8,sizeof(int));
//memset(ptr,0,8*sizeof(int));


//防止申请内存空间不够
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,num;
	int count=0;
	int *ptr =NULL; //必须初始化为NULL
	do
	{
		printf("shuruzhengshu");
		scanf("%d",&num);
		count++;
		
		ptr=(int *)realloc(ptr,count*sizeof(int)); //将拓宽后的指针返回 
		if(ptr==NULL)
		{
			exit(1);
		}
		ptr[count-1] = num; //存放输入的数据，原先的数据是拷贝了的 
	 } while(num!=-1);
	 printf("shurudezhengshufenbieshi:");
	 for(i=0;i<count;i++)
	 {
	 	printf("%d ",ptr[i]);
	 }
	 free(ptr);
 } 
