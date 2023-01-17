#include <stdio.h>
#include <math.h>

int main(void){
    float x,y,r,y2,x2,d;
    printf("请输入圆的圆心坐标：");
    scanf("%f,%f",&x,&y);
    printf("请输入圆的半径：");
    scanf("%f",&r);
    printf("请输入要判断的点的坐标(x,y)：");
    scanf("%f,%f",&x2,&y2);
    d=sqrt(pow((x2-x),2)+pow((y-y2),2));
    if(d==r){
        printf("该点在圆上\n");
    } else if(d<r){
        printf("该点在圆内\n");
    } else if(d>r){
        printf("该点不在圆内\n");
    }
    return 0;
}
