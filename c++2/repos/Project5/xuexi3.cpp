#include <iostream>
#include <Windows.h>
#include <stdio.h>

using namespace std;

int main(void) {
	char name[32];

	printf("������������֣�\n");
	scanf_s("%s",name,sizeof(name));
	printf("%s,��ã�\n", name);

	system("pause");
	return 0;
}