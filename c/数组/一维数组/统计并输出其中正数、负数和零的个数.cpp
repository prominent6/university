#include <stdio.h>

int main(void){
	int a[10];
	int x=0,y=0,z=0;
	printf("������10��������");
	for(int j=0;j<10;j++){
		scanf("%d",&a[j]);
	}
	
	for(int i=0;i<10;i++){
		if(a[i]>0){
			x++;
		} else if(a[i]==0){
			y++;
		} else if(a[i]<0){
			z++;
		}
	}
	printf("\n��������: %d\n��������: %d\n��ĸ���: %d\n",x,z,y);
}
