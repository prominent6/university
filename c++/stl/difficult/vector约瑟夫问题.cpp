//Լɪ�����⣺
//n����ʿ���1��2��...��n��Χ����Բ���ԡ�
//���Ϊ1����ʿ��1��ʼ����������m����ʿ���У�
//Ȼ����һ��λ���ٴ�1��ʼ�������ҳ��������Բ���Ե���ʿ���
#include<iostream>
#include<vector>
using  namespace  std;
int  main()
{
    vector<int>  a;
    int  n,m,x=0;
    cout<<"Input  n  and  m:";
    cin>>n>>m;
    a.resize(n);
    for(int  i=0;i<n;i++)
    {
        a[i]=i+1;
    }
    int pos = 0;
    while (a.size() > 1) {
	    for (int i = 0; i < m - 1; ++i) pos = (pos + 1) % a.size();
	    a.erase(a.begin() + pos);
    }
    cout<<"Result:"<<a[0]<<endl;
    return 0;
}
