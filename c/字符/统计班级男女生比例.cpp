//��ʲô��
//"��","Ů",һ�����������ֽ�+һ��˫����һ���ֽڣ�����Ϊ char sex[2][3];

//"male","female" char sex[2][7] 
//����> gets(sex[i]);
//����>if(strcmp(sex[i],"male")==0)  �����ַ����ıȽϷ�ʽ 

//���뷽ʽ
//��ѭ�����룬ֱ��һ�Ż�ȡ 
//gets() ���ն��ࣺ��һ��getchar()  
#include <stdio.h>
double account(char arr[],int n,char x); 
int main(void){
//	char sex[2]={"man","woman"};
	int n;
	char arr[n];
	printf("����ȫ��������\n");
	scanf("%d",&n); 
	printf("input number(m:man,n:woman)\n");
	for(int i=0;i<n;i++){
		scanf(" %c",&arr[i]);
	}
	//���Ǵ�Сд������  account(arr,n,'m')+account(arr,n,'M')
	printf("��/ŮΪ��%lf",account(arr,n,'m')/account(arr,n,'w'));
	return 0;
}
double account(char arr[],int n,char x){
	for(int i=0;i<n;i++){
		if(arr[i]=='x') x++;
	}
	return x; 
}
