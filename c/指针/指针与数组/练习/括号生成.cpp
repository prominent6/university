//括号生成
//第i个左括号的位置不能超过2*i-1 
#include <stdio.h>
char** generateParenthesis(int n, int* returnSize);
int main(void){
	int n;
	printf("Please input the number\n");
	scanf("%d",&n);
	printf("values are %d\n",n);
	return 0;
}
