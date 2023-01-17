#include <stdio.h>
int main(void){
    int w=0,h=0;
    printf("Input weight, height:\n");
    scanf("%d,%d",&w,&h);
    printf("weight=%d\n",2*w);
    printf("height=%.2f\n",(float)h/100);
    printf("t=%.2f\n",(float)w*10000/(h*h));
    
    return 0;
}

#include <stdio.h>
int main(void){
    float w=0,h=0,t=0;
    printf("Please enter h,w:\n");
    scanf("%f,%f",&h,&w);
    t=w/(h*h);
    if(t<18){
        printf("t=%.2f\tLower weight!\n",t);
    } else if(t>=18&&t<25){
        printf("t=%.2f\tStandard weight!\n",t);
    } else if(t>=25&&t<27){
        printf("t=%.2f\tHigher weight!\n",t);
    } else if(t>=27){
        printf("t=%.2f\tToo fat!\n",t);
    }
    return 0;
}
