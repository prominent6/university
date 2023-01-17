//约瑟夫问题：
//n个骑士编号1，2，...，n，围坐在圆桌旁。
//编号为1的骑士从1开始报数，报到m的骑士出列，
//然后下一个位置再从1开始报数，找出最后留在圆桌旁的骑士编号
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
