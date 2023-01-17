#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>

#define pf printf
#define sf scanf
#define pc putchar
using namespace std;
char add1[10000],add2[10000],sum[10000];
int add1len,add2len,sumlen;
void calculater(){
    int carry = 0,i;//i为加数位的下标，carry为对该位的进位
    int maxlen = max(add1len,add2len);//两个加数中 较长的加数的 长度
	//假设加数的最高位 有进位，和的长度为较长的加数的长度 加 1
    int maxlenj1 = maxlen+1;
    for(i = 0 ; i < maxlenj1 ; i++){//默认和的长度为较长的加数的长度加1
        int temp = carry;//temp：第i位加数位的和
        if(i < add1len)
            temp += add1[i] - '0';   //转化为数字 
        if(i < add2len)
            temp += add2[i] - '0';
        //如果两个加数和的最高位没有进位，sum[maxlen-1]为和的最高位
        //如果有进位和的最高位为sum[maxlen]
        if(i == maxlen && temp == 0) break;//如果加数的最高位的和为0
        sum[i] = temp % 10 + '0';
        carry = temp / 10;
    }
    sumlen = i;
}
void reverse(char* add,int len){//字符数组反转
    for(int i = 0 ; i < len/2 ; i++)
        swap(add[i],add[len-1-i]);
}
int main(){
    sf("%s",add1);//加数1
    sf("%s",add2);//加数2
    add1len = strlen(add1);//加数1的长度
    add2len = strlen(add2);//加数2的长度
    reverse(add1,add1len);//反转add1数组
    reverse(add2,add2len);//反转add2数组
    calculater();
    for(int i = sumlen-1 ; i >= 0 ; i--)
        pc(sum[i]);
    return 0;
}


