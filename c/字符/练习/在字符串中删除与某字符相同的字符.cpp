#include <stdio.h>
#include <string.h>
int main(void){
	char str[20];
	char ch;
	int i,j;
	printf("Input a string:");
	gets(str);
//	scanf("%s",str);  //²»ÐÐ 
	printf("Input a character:");
	scanf(" %c",&ch);
	for(i=0;str[i]!='\0';i++){
		if(str[i]==ch){
			for(j=i;str[j]!='\0';j++){
				str[j]=str[j+1]; 
			}
		}
	}
	printf("Results:%s\n",str);
	return 0;
}

#include <stdio.h>
#include <string.h>
#define N 100
void  Squeeze(char *s, char c);
int main()
{
    char  str[20], ch;
    printf("Input a string:");
    gets(str);
    printf("Input a character:");
    ch = getchar();
    Squeeze(str, ch);
    printf("Results:%s\n", str);
    return 0;
}
void  Squeeze(char *s, char c)
{
    int i,j;
	for(i=0;*(s+i)!='\0';i++){
		if(*(s+i)==c){
			for(j=i;*(s+j)!='\0';j++){
				*(s+j)=*(s+j+1);
			}
		}
	} 
}
