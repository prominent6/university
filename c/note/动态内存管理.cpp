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
//	ptr = (int *)malloc(num*sizeof(int)); //�����ڴ�ռ� 
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
//	free(ptr);  //�ͷ��ڴ� 
//	return 0;
//}

//calloc()�����ڴ�ռ䲢��ʼ��
//int *ptr = (int *)calloc(8,sizeof(int));

//malloc()�����ڴ�ռ䲢��memset()��ʼ��
//int *ptr=(int *)malloc(8,sizeof(int));
//memset(ptr,0,8*sizeof(int));


//��ֹ�����ڴ�ռ䲻��
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,num;
	int count=0;
	int *ptr =NULL; //�����ʼ��ΪNULL
	do
	{
		printf("shuruzhengshu");
		scanf("%d",&num);
		count++;
		
		ptr=(int *)realloc(ptr,count*sizeof(int)); //���ؿ���ָ�뷵�� 
		if(ptr==NULL)
		{
			exit(1);
		}
		ptr[count-1] = num; //�����������ݣ�ԭ�ȵ������ǿ����˵� 
	 } while(num!=-1);
	 printf("shurudezhengshufenbieshi:");
	 for(i=0;i<count;i++)
	 {
	 	printf("%d ",ptr[i]);
	 }
	 free(ptr);
 } 
