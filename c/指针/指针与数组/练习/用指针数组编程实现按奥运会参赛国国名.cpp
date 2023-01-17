#include <stdio.h>
#include <string.h>
#define  MAX_LEN  10
#define  N 150
void SortString(char *ptr[], int n);
main()
{
    int i, n;
    char *pStr[N];
    char name[N][MAX_LEN];
    printf("How many countries?\n");
    scanf("%d",&n);
    getchar();  //
    printf("Input their names:\n");
    for (i=0; i<n; i++)
    {
    	pStr[i]=name[i];
        gets(pStr[i]);
    }
    SortString(pStr, n);
    printf("Sorted results:\n");
    for (i=0; i<n; i++)
    {
        puts(pStr[i]);
    }
}
 
void SortString(char *ptr[], int n)
{
    int i,j;
    char *temp=NULL;
    for (i=0; i<n-1; i++)
    {
        for (j = i+1; j<n; j++)
        {
            if (strcmp(ptr[j],ptr[i])<0)
            {
                temp = ptr[i]; 
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }
}
