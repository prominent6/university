#include <stdio.h>
#include <Windows.h>
#include <string.h>

int main(void) {
	char name[32]="С��";
	char addr[32]= "�Ĵ�"; 
	
	printf("ͬѧ�����ʲô����?\n");
	//����  С��\n�� ���뻺������С��\n -> \n ��ʣ�£� 
	scanf("%s",&name);
	
	//������뻺����
   fflush(stdin); 
	
	printf("%sͬѧ����ס�εأ�\n",name);
	gets(addr);
	
	printf("��ס%s��%sͬѧ,��ð���\n",addr,name);
	 
	system("pause");
	return 0;
}
