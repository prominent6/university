//用什么存
//"男","女",一个汉字两个字节+一个双引号一个字节，定义为 char sex[2][3];

//"male","female" char sex[2][7] 
//——> gets(sex[i]);
//——>if(strcmp(sex[i],"male")==0)  两个字符串的比较方式 

//输入方式
//不循环输入，直接一排获取 
//gets() 吸收多余：加一个getchar()  
#include <stdio.h>
double account(char arr[],int n,char x); 
int main(void){
//	char sex[2]={"man","woman"};
	int n;
	char arr[n];
	printf("输入全班人数：\n");
	scanf("%d",&n); 
	printf("input number(m:man,n:woman)\n");
	for(int i=0;i<n;i++){
		scanf(" %c",&arr[i]);
	}
	//考虑大小写的问题  account(arr,n,'m')+account(arr,n,'M')
	printf("男/女为：%lf",account(arr,n,'m')/account(arr,n,'w'));
	return 0;
}
double account(char arr[],int n,char x){
	for(int i=0;i<n;i++){
		if(arr[i]=='x') x++;
	}
	return x; 
}
