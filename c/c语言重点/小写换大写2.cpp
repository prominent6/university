#include <stdio.h>

int main(void){
    char ch;
    printf("Please input a low-case letter from keyboard:");
    //scanf(" %c",&ch); 
	ch=getchar();
    ch=ch-32;
    printf("The capital letter and its ASCII value are:%c and %d.",ch,ch);
    
    return 0;
}
