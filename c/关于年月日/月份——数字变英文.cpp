#include <stdio.h>
int main(void)
{
    int n,i=0;
    char monthName[][20] = {"Illegal month", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    printf("Input month number:");
    scanf("%d",&n);
    if ((n <= 12) && (n >= 1))
    {
        printf("month %d is ", n);
        while(monthName[n][i]!='\0')
		{
			printf("%c",monthName[n][i++]);
		} 
		printf("\n");
    }
    else  //若n不在1～12之间
    {
        while(monthName[0][i]!='\0')
		{
			printf("%c",monthName[0][i++]);
		 } 
    }
    return 0;
}
