//�δ��� 
//ʹ��ɸ�����1~N���ڵ�����
#include  <iostream>
#include  <vector>
using  namespace  std;
vector<int>  sieve(int  n);  //��������,��n���ڵ�����
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

//ʹ��ɸ�����1~N���ڵ�����
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
            temp.push_back(i);//��������
        }
        cont = temp.size();//������õ��������Ԫ�ظ��������Ա���forѭ���ڷ������ú�������ʡʱ��
        for (int j = 0; j < cont&&temp[j]*i<=n; ++j) {
            a[temp[j] * i] = false;
            if (i % temp[j] == 0) {//�����ظ����//��ǰ��i �ǵ�ǰ�����ı������������������Ե�ǰ���϶��ǵ�ǰ���ı�����������ظ���ǣ�������������Ҫ������ǰѭ���ı�ǣ�������һ��
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

