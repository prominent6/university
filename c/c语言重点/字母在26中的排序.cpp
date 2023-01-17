#include <stdio.h>

int main(void){
    char a,b,c;
    printf("input your English name:\n");
    scanf("%c%c%c",&a,&b,&c);
    a=a-32;
    printf("%c%c%c\n",a,b,c);
    printf("%c:%d\n",a+32,a+32-96);
    printf("%c:%d\n",b,b-96);
    printf("%c:%d\n",c,c-96);
    
    return 0;
}
