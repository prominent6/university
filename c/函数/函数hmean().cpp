#include <stdio.h>

int hmean(const int x, const int y, float& r){
	if((x+y)==0) return 0;
	else {
		r=(2*(double)x*y/(x+y));
		return 1;
	}
}

int main()
{
    int x=0,y=0;
    scanf("%d %d",&x,&y);

    float r = 0;
    int b = hmean(x,y,r);

    if (b)
        printf("hmean(%d,%d)=%.2f",x,y,double(r));
    else
        printf("Input error.");

    return 0;
}

