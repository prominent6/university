#include <stdio.h>
#include <math.h>

int main(void) {
	float money_end=0,money_begin;
	for(int i=5; i>=1; i--) {
		money_begin=(money_end+1000)/(1+0.01875*12);
		printf("��%d�������%fԪ,����ױ�Ϣ�ϼ�%f,ȡ��1000Ԫ��ʣ�ࣺ%fԪ\n",
		       i,money_begin,money_begin*(1+0.01875*12),money_begin*(1+0.01875*12)-1000);
		money_end=money_begin;
	}
}
