#include <Stdio.h>
#include <ctype.h>
#define N 80
int main(void)
{
	char name[N];
	printf("Input a name:");
	gets(name);
	int i=0;
	while(!isalpha(name[i]))   //��������ǰ�Ŀո��Ӱ�� 
	{
		i++;
	}
	name[i]=toupper(name[i]); //����������ĸ��ɴ�д 
	printf("���ĺ�%s\n",name);
	while(!isspace(name[i]))
	{
		i++;
	}
	while(!isalpha(name[i]))
	{
		i++;
	}
	name[i]=toupper(name[i]);
	printf("���ĺ�%s\n",name);
	return 0;
 } 
