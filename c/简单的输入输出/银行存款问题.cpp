#include <stdio.h>
#include <math.h>

int main(void) {
	float money_end=0,money_begin;
	for(int i=5; i>=1; i--) {
		money_begin=(money_end+1000)/(1+0.01875*12);
		printf("第%d年年初有%f元,到年底本息合计%f,取出1000元后剩余：%f元\n",
		       i,money_begin,money_begin*(1+0.01875*12),money_begin*(1+0.01875*12)-1000);
		money_end=money_begin;
	}
}
