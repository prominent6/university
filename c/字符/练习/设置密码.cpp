#include <stdio.h>
#include <string.h>
int main(void){
	char str[20];
	gets(str);
	int flag=1,i,j; //1-完全正确 2- 长度不够 3-小于三个字符 4-非法字符 -->只有1或0或4 
	int have[4]={0}; //0-大写字母 1-小写 2-数字 3-特殊符号 
	for(i=0;str[i]!='\0';i++){  //一开始没有注意到等于，以及写了 '0'<=str[i]<='9'还不报错！！！ 
		if('A'<=str[i]&&str[i]<='Z') have[0]=1;
		else if('a'<=str[i]&&str[i]<='z') have[1]=1;
		else if('0'<=str[i]&&str[i]<='9') have[2]=1;
		else if(str[i]=='@'||str[i]=='-'||str[i]=='_'||str[i]=='~'||str[i]=='#') have[3]=1; //存在非法字母少判断一个 
		else{
			flag=4;
		}
	}
	if(flag==4) printf("密码中存在非法字符\n");
	int sum=0;
	for(j=0;j<4;j++){
		sum+=have[j];
	}
	if(sum<3){
		flag=0;
		if(strlen(str)<=8) printf("密码长度太短且密码中应包含大小写字母、数字、其它符号四种中至少三种字符\n");
		else printf("密码中应包含大小写字母、数字、其它符号四种中至少三种字符\n");
	}else{
		if(strlen(str)<=8){
			flag=0; 
			printf("密码长度太短\n");
		}
	}
	if(flag==1) printf("密码设置成功\n");
//	else if(flag==2) printf("密码长度太短\n");
//	else if(flag==3) printf("密码中应包含大小写字母、数字、其它符号四种中至少三种字符\n");
//	else if(flag==4) printf("密码中存在非法字符\n");
//	else if(flag==2&&flag==3) printf("密码长度太短且密码中应包含大小写字母、数字、其它符号四种中至少三种字符\n");
	return 0;
}
