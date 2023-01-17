#include <stdio.h>
int main(void){
	double m;
	printf("请输入地震的里氏强度: ");
	scanf("%lf",&m);
	printf("本次地震后果：");
	if(m<4.0) printf("很小");
	else if(m>=4.0&&m<5.0) printf("窗户晃动");
	else if(m>=5.0&&m<6.0) printf("墙倒塌；不结实的建筑物被破坏");
	else if(m>=6.0&&m<7.0) printf("烟囱倒塌；普通建筑物被破坏");
	else if(m>=7.0&&m<8.0) printf("地下管线破裂；结实的建筑物也被破坏");
	else printf("地面波浪状起伏；大多数建筑物损毁");
	printf("！\n");
	return 0;
}
