#include <Stdio.h>
#include <ctype.h>
#define N 80
int main(void)
{
	char name[N];
	printf("Input a name:");
	gets(name);
	int i=0;
	while(!isalpha(name[i]))   //消灭输入前的空格的影响 
	{
		i++;
	}
	name[i]=toupper(name[i]); //将名的首字母变成大写 
	printf("更改后：%s\n",name);
	while(!isspace(name[i]))
	{
		i++;
	}
	while(!isalpha(name[i]))
	{
		i++;
	}
	name[i]=toupper(name[i]);
	printf("更改后：%s\n",name);
	return 0;
 } 
