#include <stdio.h>
int main(void){
	char ch1[50],ch2[50],ch3[20];
	scanf("%s%s",ch1,ch2);
//	gets(ch1);
//	gets(ch2);
	char *a1=ch1;
	char *a2=ch2;
	char *a3=ch3;
	while(*a1!=*a2){
		a1++;
	}
	while(*a1!='\0'){
		if(*a1==*a2){
			*a3=*a1;
			a3++;
			a2++;
		}
		a1++;
	}
	printf("%s\n",ch3);
	return 0;
}
