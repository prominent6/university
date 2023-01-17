//#include <stdio.h>
//#define N 80
//char *MyStrcat(char *dstStr,char *srcStr);
//
//int main(void)
//{
//	char first[2*N];
//	char second[N];
//	printf("first:");
//	gets(first);
//	printf("second:");
//	gets(second);
//	printf("result:%s\n",MyStrcat(first,second));
//	return 0;
//}
//char *MyStrcat(char *dstStr,char *srcStr)
//{
//	char *pStr=dstStr;  //保存字符串dstStr首地址   // 
//	while(*dstStr!='\0')
//	{
//		dstStr++;
//    }  //将指针移到字符串dstStr的末尾
//	for(;*srcStr!='\0';dstStr++,srcStr++)
//	{
//		*dstStr=*srcStr;
//	} //将字符串 srcStr复制到字符串 dstStr的后面
//	*dstStr='\0';
//	return pStr;   //返回连接后的字符串dstStr的首地址   //
//}



#include <stdio.h>
void  MyStrcat(char *dstStr, char *srcStr);
int main(void){
	char ch1[20],ch2[20];  //需要定义字符数组 
	printf("Input a string:");
	gets(ch1);
	printf("Input another string:");
	gets(ch2);
	MyStrcat(ch1,ch2); 
	printf("Concatenate results:%s\n",ch1);
	return 0;
}
void  MyStrcat(char *dstStr, char *srcStr){
	int i=0;
	while(dstStr[i]!='\0'){
		dstStr++;
	}
	while(srcStr[i]!='\0'){
		*dstStr=*srcStr;
		dstStr++;
		srcStr++;
	}
	*dstStr='\0';
}
