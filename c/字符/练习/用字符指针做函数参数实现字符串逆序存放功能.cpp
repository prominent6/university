//��һ 
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

//ͬ��һ 
#include <stdio.h>
#include <string.h> 
#define N 10
char ptr[N];   //���ٸ�һ����������
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

//���� 
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//char *niXuPoint(char *p);
//int main(void)
//{
//	char *p = "abcdefg";
//    printf("����ǰ��%s\n�����", p);
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
//	//pHeadָ������ĺ�pָ����ַ���һ�����Ŀռ���׵�ַ��
//	//����ռ�������������ַ��� 
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

//���� 
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
////		str[i]=str[strlen(str)-1-i];  //���� ����ǵ��򽻻� 
//		
//		temp=str[i];
//		str[i]=str[strlen(str)-1-i];
//		str[strlen(str)-1-i]=temp;   //������໥���� 
//	}
//}
