#include <stdio.h>

int main(void)
{
    int n,i;
    printf("�������ַ�������");
	scanf("%d",&n);
	char a[n+1];
	
	printf("�뿪ʼ�����ַ���");
	for(int i=0;i<n;i++)
	{
		scanf("%c",&a[i]);
	 } 
	// a[n] = '\0';  //���ַ����������Ͻ�����
	//scanf������������Զ����Ͻ����� 
	printf("��������ַ����ǣ�%s",a);
	return 0;
}
