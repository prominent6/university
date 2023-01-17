#include <stdio.h>

#define SHOWLIST(...) printf(# __VA_ARGS__)  //可变参数可为空参数 
int main(void)
{
	SHOWLIST(what are you doing?);
	return 0;
}
