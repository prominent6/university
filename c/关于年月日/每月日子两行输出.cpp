#include <stdio.h>

int main(void){
    int y=0;
    printf("ÇëÊäÈëÄê·İ:");
    scanf("%d",&y);
    int arr[6] = { 31,29,31,30,31,30 };
    int arr1[6] = { 31,31,30,31,30,31 };
    int arr2[6] = { 31,28,31,30,31,30 };
    
    if(y%4==0&&y%100!=0||y%400==0){
        for(int i=0;i<6;i++) {
            printf("%d",arr[i]);
            if(i!=5) printf(",");
            else printf("\n");
        }
        for(int i=0;i<6;i++) {
            printf("%d",arr1[i]);
            if(i!=5) printf(",");
            else printf("\n");
        
        }
    } else {
        for(int i=0;i<6;i++) {
            printf("%d",arr2[i]);
            if(i!=5) printf(",");
            else printf("\n");
        }
        for(int i=0;i<6;i++) {
            printf("%d",arr1[i]);
            if(i!=5) printf(",");
            else printf("\n");
        }
 
    }
    return 0;
}
