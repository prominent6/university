//��дһ�����򣬴Ӽ���������һ�������ʣ�ÿ���յ�һ�����ʺ�����õ����Ƿ��������ֹ��Լ����ִ�����
//���Գ��Էֱ��ö��ؼ��ϣ�multiset����ӳ�䣨map������;��ʵ�֣������߽��бȽ�
//����#����
#include  <iostream>
#include  <string>
using  namespace  std;
//#include  <set>
#include <map>
int  main()
{
    //multiset<string>  arr;
    map<string,int> arr;
    string  s;
    cin>>s;
    while(s!="#")
    {
        int  times=0;
       // times = arr.count(s);
        times=arr[s];
        cout<<"times:"<<times<<endl;
        arr[s]++;
        cin>>s;
    }
    arr.clear();
    return 0;
}
