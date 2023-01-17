#include <stdio.h>
#include <string.h>
#define N 8
#define MAX_LEN 20
void SortString(char *ptr[],int n);
int main(void)
{
	int n;
	char name[N][MAX_LEN];  
	char *pStr[N];  
	printf("How many countries?"); 
	scanf("%d",&n);
	getchar();  //
	printf("Input their names:\n");
	for(int i=0;i<n;i++)
	{
		pStr[i]=name[i];
		gets(pStr[i]); 
	}
	SortString(pStr,n);
	printf("Sorted results:\n");
	for(int i=0;i<n;i++)
	{
		puts(pStr[i]);
	}
	return 0;
 }

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
