//用比较计数法对结构数组a按字段num进行升序排序
#include <stdio.h>
#define N 20
/*定义结构体用来存储数据及它的排序*/
struct order{
	int num;
	int con;
} a[N];
int main(void){
	int i,j;
	for(i=0;i<5;i++){
		scanf("%d",&a[i].num);
		a[i].con=0;
	}
	//双重循环判断比多少值大 
	for(i=0;i<5;i++){
		for(j=i;j<5;j++){
			if(a[j].num>a[i].num){
				a[j].con ++;
			} else if(a[j].num<a[i].num){
				a[i].con ++;
			}
		}
	}
	printf("各数的顺序是:\n");
	for(i=0;i<5;i++){
		printf("%3d%3d\n",a[i].num,a[i].con);
	}
//	while(gets(a[i].num)!=EOF){
//		a[i].con=0;
//	}
	return 0;
}
