#include <stdio.h>

#define SHOWLIST(...) printf(# __VA_ARGS__)  //�ɱ������Ϊ�ղ��� 
int main(void)
{
	SHOWLIST(what are you doing?);
	return 0;
}
