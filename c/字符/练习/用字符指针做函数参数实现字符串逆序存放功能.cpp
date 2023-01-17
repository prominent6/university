//法一 
//#include <stdio.h>
//#include <string.h>
//void reverse(char *ptr,char *str);
//int main(void){
//	char str[20],ptr[20];
//	printf("Input a string:");
//	gets(str);
//	printf("%s",*str);
//	reverse(ptr,str); 
//	printf("Inversed results:%s\n",ptr);
//	return 0;
//}
//void reverse(char *ptr,char *str){
//	int i,j;
//	for(int i=0;i)
//	while(*str!='\0'){
//		*ptr=*str;
//		*str++;
//		*ptr++;
//	}
//	*ptr='\0';
//}

//同法一 
#include <stdio.h>
#include <string.h> 
#define N 10
char ptr[N];   //得再搞一个数组来存
void Inverse(char str[]);
int main(void){
	char str[N];
	printf("Input a string:");
	gets(str);
	Inverse(str);
	printf("Inversed results:%s\n",ptr);
	return 0;
}
void Inverse(char str[]){
	int i;
	for(i=0;str[i]!='\0';i++){
		ptr[i]=str[strlen(str)-1-i];
	} 
	ptr[i]='\0';
}

//法二 
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//char *niXuPoint(char *p);
//int main(void)
//{
//	char *p = "abcdefg";
//    printf("逆序前：%s\n逆序后：", p);
//	p = niXuPoint(p);
//	printf("%s",p);
//	free(p);
//	return 0;
//}
//
//char *niXuPoint(char *p)
//{
//	char *pHead = NULL, *pTail = NULL, temp = 0;
//	int i;
////	pHead = (char*)malloc(sizeof(p)); 
//	pHead = (char*)malloc(strlen(p));
//	//pHead指向申请的和p指向的字符串一样长的空间的首地址，
//	//这个空间就用来存逆序字符串 
//	pTail = p + strlen(p) - 1;
//	p = pHead;
////	printf("%d",strlen(p));
//	for(i = 0; i <=strlen(p); i++)
//    {
//    	*pHead++ = *pTail--;
//    }
//	*pHead = '\0';
//	return p;
//}

//法三 
//#include <stdio.h>
//#include <string.h>
//#define M 80
//void Inverse(char str[]);
//int main(void){
//	char str[M];
//	printf("Input a string:\n");
//	gets(str);
//	Inverse(str);
//	printf("Inversed results:\n");
//	printf("%s\n",str);
//	return 0;
//}
//void Inverse(char str[]){
//	int i;
//	char temp; 
//	for(i=0;i<strlen(str)/2;i++){ 
////		str[i]=str[strlen(str)-1-i];  //不行 这个是单向交换 
//		
//		temp=str[i];
//		str[i]=str[strlen(str)-1-i];
//		str[strlen(str)-1-i]=temp;   //这个是相互交换 
//	}
//}
