//法一 
//#include <stdio.h>
//#include <string.h>
//#define N 80
//void Inverse(char str[], char ptr[]);
//int main(void){
//	char str[N];
//	char ptr[N]; 
//	printf("Input a string:");
//	gets(str);
//	Inverse(str,ptr);
//	printf("Inversed results:%s\n",ptr);
//	return 0;
//}
//void Inverse(char str[], char ptr[]){
//	int i;
////	for(int i=0;i<strlen(str);i++){
//    for(i=0;str[i]!='\0';i++){
//		ptr[strlen(str)-1-i]=str[i];
//	} 
//	ptr[i] = '\0';  //
//}

//法二 
#include <stdio.h>
#include <string.h>
#define N 80
void Inverse(char str[]);
int main(void){
	char str[N];
	printf("Input a string:");
	gets(str);
	Inverse(str);
	printf("Inversed results:%s\n",str);
	return 0;
}
void Inverse(char str[]){
	int i;
	char temp;
    for(i=0;i<strlen(str)/2;i++){
		temp=str[i];
		str[i]=str[strlen(str)-1-i];
		str[strlen(str)-1-i]=temp;
	} 
}

//法三
//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	char *p,*q,ch;
//	char str[20];
//	printf("Input a string:");
//	gets(str);
//	p=str;  //p指向字符串的首地址 
//	q=p+strlen(str)-1; //q指向字符串的尾地址 
//	while(p<q)
//	{
//		ch=*q;
//		*q--=*p;
//		*p++=ch;
//	}
//	printf("Inversed results:%s\n",str);
//    return 0;
//}

