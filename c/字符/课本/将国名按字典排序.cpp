//#include <stdio.h>
//#include <string.h>
//#define N 150
//#define MAX_LEN 10
//void SortString(char str[][MAX_LEN],int n);
//int main(void)
//{
//	int n;
//	char name[N][MAX_LEN];  //���N�����ң�ÿ�����ҵĹ�������С��MAX_LEN 
//	printf("���ٸ����ң�");
//	scanf("%d",&n); 
//	getchar();
//	printf("������ҵ����֣�\n");
//	for(int i=0;i<n;i++)
//	{
//		gets(name[i]);
//	}
//	SortString(name,n);
//	printf("�����\n");
//	for(int i=0;i<n;i++)
//	{
//		puts(name[i]);
//	}
//  return 0;
// }
// void SortString(char str[][MAX_LEN],int n)
// {
// 	char temp[MAX_LEN];
// 	for(int i=0;i<n-1;i++)
// 	{
// 		for(int j=i+1;j<n;j++)
// 		{
// 			if(strcmp(str[j],str[i])<0)   //
// 			{
// 				strcpy(temp,str[i]);  //
// 				strcpy(str[i],str[j]);
// 				strcpy(str[j],temp);
//			 }
//		 }
//	 }
//  }
// 

#include <stdio.h>
#include <string.h>
#define N 150
#define MAX_LEN 10
void SortString(char *ptr[],int n);
int main(void)
{
	int n;
	char name[N][MAX_LEN];  //���N�����ң�ÿ�����ҵĹ�������С��MAX_LEN 
	char *pStr[N];    //�����ַ�ָ������
	printf("���ٸ����ң�");
	scanf("%d",&n); 
	getchar();
	printf("������ҵ����֣�\n");
	for(int i=0;i<n;i++)
	{
		pStr[i]=name[i];
		//��pStr[i]ָ���ά����name�ĵ�һ��,
	//�����i���ַ������浽 pStr[i]ָ��Ĵ洢��Ԫ������ά�ַ�����name�ĵ�i�У���   
		//��ָ��һ����ʹ��ǰ�����ʼ�� ���������ַ����������г�ʼ��
	//	char *pStr[N]={"Amercia","England","Austalia","Sweden","Finland"}; 
		
		gets(pStr[i]);
	}
	SortString(pStr,n);
	printf("�����\n");
	for(int i=0;i<n;i++)
	{
		puts(pStr[i]);
	}
	return 0;
 }
 //��ָ���������������� 
 //������ֻ�ı�ԭ��ָ������pStr��Ԫ�ص�ָ��
 //��δ�ı��ά�ַ�����name���ַ���������˳�� 
 void SortString(char *ptr[],int n)
 {
 	char *temp=NULL;
 	for(int i=0;i<n-1;i++)
 	{
 		for(int j=i+1;j<n;j++)
 		{
 			if(strcmp(ptr[j],ptr[i])<0)   //
 			{
 				temp=ptr[i];   
 				ptr[i]=ptr[j];
 				ptr[j]=temp;
			 }
		 }
	 }
  } 
