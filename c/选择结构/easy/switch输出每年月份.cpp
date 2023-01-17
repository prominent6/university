#include <stdio.h>
int main(void){
    int m=0,y=0;
    printf("Input year,month:");
    scanf("%d, %d",&y,&m);
    switch(m)
    {
        case 1: 
		    printf("31 days\n");
            break;	 
        case 2:
            if(y%4==0&&y%100!=0||y%400==0){
            printf("29 days\n");
        } else {
            printf("28 days\n");
        }
            break; 
        case 3:
            printf("31 days\n");
            break;
        case 4:
		    printf("30 days\n");
            break;
        case 5:
		    printf("31 days\n");
            break;
        case 6:printf("30 days\n");
            break;
        case 7:printf("31 days\n");
            break;
        case 8:printf("31 days\n");
            break;
       case 9:printf("30 days\n");
            break;
        case 10:printf("31 days\n");
            break;
        case 11:printf("30 days\n");
            break;
        case 12:printf("31 days\n");
            break;
        default:printf("Input error!\n");
    }
    return 0;
}
