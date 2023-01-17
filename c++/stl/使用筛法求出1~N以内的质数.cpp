//段错误 
//使用筛法求出1~N以内的质数
#include  <iostream>
#include  <vector>
using  namespace  std;
vector<int>  sieve(int  n);  //函数声明,求n以内的质数
vector<int>  sieve(int  n){
	vector<int> pri;
	vector<bool> is_pri(10000001,true);
	for(int i=2;i<=n;i++){
		if(is_pri[i]){
			pri.push_back(i);
			for(int j=i*i;j<=n;j+=i){
				is_pri[j]=false;
			}
		}
	} 
	return pri;
}
int  main()
{
	int n;
        cin  >>  n;

        vector<int>  ans  =  sieve(n);

        cout  <<  ans.size()  <<  endl;
        for  (int  i  =  0;  i  <  ans.size();  i++)  {
                cout  <<  ans[i];
                if  (i  <  ans.size()  -  1)  cout  <<  "  ";
        }
        cout  <<  endl;

        return  0;
}

//使用筛法求出1~N以内的质数
#include  <iostream>
#include  <vector>
#include <string.h>
using  namespace  std;
bool a[10000002];
vector<int> sieve(int n) {
	vector<int> temp;
    int cont = 0;
    memset(a, true, sizeof(a));
    for (int i = 2; i <= n; ++i) {
        if (a[i]) {
            temp.push_back(i);//加入数组
        }
        cont = temp.size();//在这里得到，数组的元素个数，可以避免for循环内反复调用函数，节省时间
        for (int j = 0; j < cont&&temp[j]*i<=n; ++j) {
            a[temp[j] * i] = false;
            if (i % temp[j] == 0) {//避免重复标记//当前数i 是当前素数的倍数，则后面的素数乘以当前数肯定是当前数的倍数，会造成重复标记，所以遇到整除要结束当前循环的标记，进入下一轮
                break;
            }
        }
    }
	return temp;
}
int  main()
{
	int n;
        cin  >>  n;

        vector<int>  ans  =  sieve(n);

        cout  <<  ans.size()  <<  endl;
        for  (int  i  =  0;  i  <  ans.size();  i++)  {
                cout  <<  ans[i];
                if  (i  <  ans.size()  -  1)  cout  <<  "  ";
        }
        cout  <<  endl;

        return  0;
}

