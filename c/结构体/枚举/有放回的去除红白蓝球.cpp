#include <stdio.h>
#define COLORNUM 3
char *col[COLORNUM]={"red","write","blue"};
int main(void){
	int i,j,k;
	printf("result:\n");
	for(i=0;i<2;i++)
	    for(j=0;j<2;j++)
	        for(k=0;k<2;k++)
	        {
	        	printf("%s\t%s\t%s\t����\t",col[i],col[j],col[k]);
	        	printf("%d\t%d\t%d\n",i,j,k);
			}
}

#include <stdio.h>
#define COLORNUM 3
enum Color{red,white,blue}; //ÿ��ֵΪһ�����ų����������ָ��ֵ��Ĭ��Ϊ0��1... 
typedef enum Color COLOR;
char *col[COLORNUM]={"red","write","blue"};
int main(void){
	COLOR i,j,k; //����ö�����͵ı��� 
	printf("result:\n");
	for(i=red;i<blue;i++)
	    for(j=red;j<blue;j++)
	        for(k=red;k<blue;k++)
	        {
	        	printf("%s\t%s\t%s\t����\t",col[i],col[j],col[k]);
	        	printf("%d\t%d\t%d\n",i,j,k);
			}
}
