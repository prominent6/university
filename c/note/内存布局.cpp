#include <stdio.h>
#include <stdlib.h>

int global_uninit_var;
int global_init_var1 = 520;
int global_init_var2 = 880;
 
void func(void);
void func(void)
{
	;
}

int main(void)
{
	int local_var1;
	int local_var2;
	
	static int static_uninit_var;
	static int static_init_var=456;
	
	char *str1="how are you?";
	char *str2="I'm fine";
	
	int *malloc_var =(int *)malloc(sizeof(int));
	
	printf("add of func:%p\n",func);
	printf("add of str1:%p\n",str1);
	printf("add of str2:%p\n",str2);
	printf("add of global_init_var1:%p\n",&global_init_var1);
	printf("add of global_init_var2:%p\n",&global_init_var2);
	printf("add of static_init_var:%p\n",&static_init_var);
    printf("add of static_uninit_var:%p\n",&static_uninit_var);
    printf("add of global_uninit_var:%p\n",&global_uninit_var);
    printf("add of malloc_var:%p\n",malloc_var);
    printf("add of local_var1:%p\n",local_var1);
    printf("add of local_var2:%p\n",local_var2);
	
	return 0; 
}
