#include <stdio.h>

int  main(void){
    int x;
    int sum=0;
    printf("Input the number:");
    scanf("%d",&x);
    while(x>1)
    {
        sum= sum*10+x%10;
        x/=10;
    }
      printf("%d",sum);
    return 0;
  
}
