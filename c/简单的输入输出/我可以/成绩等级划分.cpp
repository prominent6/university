#include <stdio.h>

int main(void){
    int s=0;
    printf("input the score :");
    scanf("%d",&s);
    
    if(s>=90&&s<=100){
        printf("score=%d-->A\n",s);
    } else if (s>=80&&s<90){
        printf("score=%d-->B\n",s);
    } else if (s>=70&&s<=80){
        printf("score=%d-->C\n",s);
    } else if (s>=60&&s<=70){
        printf("score=%d-->D\n",s);
    } else if (s>=0&&s<60){
        printf("score=%d-->E\n",s);
    } else {
        printf("score=%d is error!\n",s);
    }
    return 0;
}
