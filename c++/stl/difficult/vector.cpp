//ʹ��ɸ�����1~N���ڵ�����
#include  <iostream>
#include  <vector>
using  namespace  std;

vector<int>  sieve(int  n);  //��������,��n���ڵ�����
vector<int>  sieve(int  n){
	vector<int> pri;
	vector<bool> is_pri(n+1,true);
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
        int  n;
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

