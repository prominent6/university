//#include <stdio.h>
//int main(void){
//	char ch;
//	int words=0,lines=0,chars=0;
//    int state = 0;
//	//scanf("%c",&ch)；	//while(ch!=EOF){    最初的想法 
//	//while(ch=getchar()!=EOF){    
//	while(scanf("%c",&ch)!=EOF){
//
//		chars++;
//		if(ch=='\n'){
//			lines++;
//		}
////		if(ch!=' ') words++;
//		if(ch==' '||ch=='\n'||ch=='\t'){
//			state=0;
//		} else if(state==0){
//	     	state=1;
//			words++;
//		}
//	}
//	printf("Lines=%d\nWords=%d\nChars=%d\n",lines,words,chars);
//	return 0;
//}

//#include <stdio.h>
//int main(void){
//	char string[81];
//	char ch;
//	int words=0;
//    int state = 0;
//	gets(string); 
//	for(int i=0;(ch=string[i])!='\0';i++)
//	{
//		if(ch==' '||ch=='\n'||ch=='\t'){
//			state=0;
//		} else if(state==0){
//	     	state=1;
//			words++;
//		}
//	}
//	printf("Words=%d\n",words);
//	return 0;
//}

//#include <stdio.h>
//#define N 80
//int main(void)
//{
//	char str[N];
//	int letter=0,digit=0,space=0,others=0;
//	printf("Input a string:");
//	gets(str);
//	for(int i=0;str[i]!='\0';i++)
//	{
//		if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z') letter++;
//		else if(str[i]>='0'&&str[i]<='9') digit++;
//		else if(str[i]==' ') space++;
//		else others++;
//	}
//	printf("letter:%d\n",letter);
//	printf("digit:%d\n",digit);
//	printf("space:%d\n",space);
//	printf("others:%d\n",others);
//	return 0;
//}

//使用字符处理函数
 #include <stdio.h>
 #include <ctype.h>
#define N 80
int main(void)
{
	char str[N];
	int letter=0,digit=0,space=0,others=0;
	printf("Input a string:");
	gets(str);
	for(int i=0;str[i]!='\0';i++)
	{
		if(isalpha(str[i])) letter++;
		else if(isdigit(str[i])) digit++;
		else if(isspace(str[i])) space++;
		else others++;
	}
	printf("letter:%d\n",letter);
	printf("digit:%d\n",digit);
	printf("space:%d\n",space);
	printf("others:%d\n",others);
	return 0;
}
