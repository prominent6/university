#include <stdio.h>
int main(void){
	char b[]="program";
	char *a="PROGRAM";
	printf("%c %s\n",*a,b+1); //P rogram
    return 0;
}
