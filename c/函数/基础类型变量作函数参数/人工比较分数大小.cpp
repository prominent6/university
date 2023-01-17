//#include <stdio.h>
// 
//#define FRACSIZE 2
//#define NUME 0
//#define DENO 1
// int LCM(int *a, int *b);
//int LCM(int a, int b)
//{
//    int temp_frac1[FRACSIZE];
//    int temp_frac2[FRACSIZE];
// 
///********************两个分数进行通分*********************/
//    temp_frac1[NUME] = a[NUME] * b[DENO];  //第一个分数的分子 ＝ 第一个分数的
//                                          //分子 ＊ 第二个分数的分母
//    temp_frac2[NUME] = b[NUME] * a[DENO];  //第二个分数的分子 ＝ 第二个分数的 
//                                          //分子 ＊ 第一个分数的分母
//    if(temp_frac1[NUME] > temp_frac2[NUME])
//    {
//        return 1;
//    }
//    if(temp_frac1[NUME] == temp_frac2[NUME])
//    {
//        return 0;
//    }
//    return -1;
//}
// 
//int main()
//{
//    int frac_num1[FRACSIZE];
//    int frac_num2[FRACSIZE];
//    int flag;
// 
//    printf("Input two fractions\n");
//    scanf("%d/%d,%d/%d",&frac_num1[0],&frac_num1[1],&frac_num2[0],&frac_num2[1]);
//    flag = LCM(frac_num1, frac_num2);
//    switch(flag)
//    {
//        case 1:
//        {
//            printf("%d/%d>%d/%d\n",frac_num1[0],frac_num1[1],frac_num2[0],frac_num2[1]);
//            break;
//        }
//        case 0:
//        {
//            printf("%d/%d=%d/%d\n",frac_num1[0],frac_num1[1],frac_num2[0],frac_num2[1]);
//            break;
//        }
//        case -1:
//        {
//            printf("%d/%d<%d/%d\n",frac_num1[0],frac_num1[1],frac_num2[0],frac_num2[1]);
//            break;
//        }
//        default:
//        {
//            printf("error\n");
//            break;
//        }
//    }
//    
//    return 0;
// 
//}





#include <stdio.h>
int LCM(int *a, int *b);
int LCM(int *a, int *b)
{
	for(int i=0;;i++){
		if(i/a[1]==b[1]||i/b[1]==a[1]){
			return i;
			break;
		}
		}
}

int main(void){
	int frac_num1[2];
    int frac_num2[2];
    int result;
    int a;
    int b;
 
    printf("Input two fractions\n");
    scanf("%d/%d,%d/%d",&frac_num1[0],&frac_num1[1],&frac_num2[0],&frac_num2[1]);
    result = LCM(frac_num1, frac_num2);
//    printf("%d\n",result);
    
	a = frac_num1[0]*result/frac_num1[1];  //第一个分数的分子 ＝ 第一个分数的
                                          //分子 ＊ 第二个分数的分母
    b = frac_num2[0] * result/frac_num2[1];  //第二个分数的分子 ＝ 第二个分数的 
                                          //分子 ＊ 第一个分数的分母
    if(a > b)
    {
        printf("%d/%d>%d/%d\n",frac_num1[0],frac_num1[1],frac_num2[0],frac_num2[1]);
    }
    else if(a == b)
    {
       printf("%d/%d=%d/%d\n",frac_num1[0],frac_num1[1],frac_num2[0],frac_num2[1]);
    }
    else if(a < b)
    {
    	printf("%d/%d<%d/%d\n",frac_num1[0],frac_num1[1],frac_num2[0],frac_num2[1]);
	}
	return 0;
}
