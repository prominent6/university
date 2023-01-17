#include <stdio.h>
//功能：对待加密字符串source加密后保存加密字符串到code.
void SentenceEncoding(char *soure,char *code);
int main(void){
	char ch1[20],ch2[20];
	printf("Input source sentence:");
	gets(ch1);
	SentenceEncoding(ch1,ch2);
	printf("Encoded sentence:%s\n",ch2);
	return 0;
}
void SentenceEncoding(char *soure,char *code)
{
	int i=0;
	char ch;
    while(soure[i]!='\0'){
    	ch=soure[i];
    	if(ch>='A' && ch<='Z'){
        code[i]= ('A'+'Z')- ch;  
        }
        else if(ch>='a' && ch<= 'z' ){
        code[i]=('a'+'z')-ch;  
        }
        else{
            switch(ch){
                case ' ': code[i] = '@';    
                    break;                
                case '.': code[i] = '#';  
                    break;
                default: code[i] = '.';  
                    break;
            }
        }
        i++;
	}
	code[i]='\0';
}
