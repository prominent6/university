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
    int carry = 0,i;//iΪ����λ���±꣬carryΪ�Ը�λ�Ľ�λ
    int maxlen = max(add1len,add2len);//���������� �ϳ��ļ����� ����
	//������������λ �н�λ���͵ĳ���Ϊ�ϳ��ļ����ĳ��� �� 1
    int maxlenj1 = maxlen+1;
    for(i = 0 ; i < maxlenj1 ; i++){//Ĭ�Ϻ͵ĳ���Ϊ�ϳ��ļ����ĳ��ȼ�1
        int temp = carry;//temp����iλ����λ�ĺ�
        if(i < add1len)
            temp += add1[i] - '0';   //ת��Ϊ���� 
        if(i < add2len)
            temp += add2[i] - '0';
        //������������͵����λû�н�λ��sum[maxlen-1]Ϊ�͵����λ
        //����н�λ�͵����λΪsum[maxlen]
        if(i == maxlen && temp == 0) break;//������������λ�ĺ�Ϊ0
        sum[i] = temp % 10 + '0';
        carry = temp / 10;
    }
    sumlen = i;
}
void reverse(char* add,int len){//�ַ����鷴ת
    for(int i = 0 ; i < len/2 ; i++)
        swap(add[i],add[len-1-i]);
}
int main(){
    sf("%s",add1);//����1
    sf("%s",add2);//����2
    add1len = strlen(add1);//����1�ĳ���
    add2len = strlen(add2);//����2�ĳ���
    reverse(add1,add1len);//��תadd1����
    reverse(add2,add2len);//��תadd2����
    calculater();
    for(int i = sumlen-1 ; i >= 0 ; i--)
        pc(sum[i]);
    return 0;
}


