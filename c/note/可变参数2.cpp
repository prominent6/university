#include <stdio.h>

#include <stdarg.h>

int sum(int n,...);   //...��ʾ����������ȷ�� ��n��ʾ�������� 
int sum(int n,...){
	int i,sum=0;
	va_list vap; //��������б�
	va_start(vap,n); //��ʼ�������б� 
	for(i=0;i<n;i++){
		sum+=va_arg(vap,int); //��ȡ����ÿ��������ֵ 
	}
	va_end(vap); //�رղ����б�
	return sum; 
}
int main(void){
	int result;
	result = sum(1,2,3,4);
	printf("%d\n",result);
	return 0;
}
