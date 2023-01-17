#include <stdio.h>

int main(void){
    printf("****TIME****\n");
    printf("1.morning\n");
    printf("2.afternoon\n");
    printf("3.night\n");
    int c;
    printf("Enter your choice:\n");
    scanf("%d",&c);
    switch (c){
        case 1:
        printf("Good morning");
        break;
        case 2:
        printf("Good afternoon");
        break;
        case 3:
        printf("Good night");
        break;
        default :
        printf("Selection wrong");
    } 

    return 0;
}

