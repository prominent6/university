#include <stdio.h>
#include <string.h>
int main(void){
	int a[2][3]={1,2,3,4,5,6};
	int *p=&a[0][0];
	printf("%d",p[4]);  //5 
//	char str[20]="code";
//	char *p=str;
//	putchar(str[2]); //d
//	putchar(*(str+2)); //d
//	putchar(p[2]); //d
//	putchar((*p)+2); //e
//	putchar(*(p+2)); //d
	
//	char str[20]="abcde";
//	char *p=str+2;
//	puts(p); //cde

//char *p=str+strlen(str)-1;
//printf(" %c",*p); //e 



return 0;
}
