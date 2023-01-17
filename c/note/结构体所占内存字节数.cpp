//#include <stdio.h>
//typedef struct sample
//{
//	char m1;
//	int m2;
//	char m3;
//}SAMPLE;
//int main(void)
//{
//	SAMPLE s={'a',2,'b'};
//	printf("struct所占字节数为：%d\n",sizeof(s));
//	return 0;
//}

#include <stdio.h>
union sample
{
	char m1;
	int m2;
	char m3;
};
typedef union sample SAMPLE;
int main(void)
{
	printf("struct所占字节数为：%d\n",sizeof(SAMPLE));
	return 0;
}
