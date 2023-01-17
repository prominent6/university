//编写一个程序，从键盘上输入一个个单词，每接收到一个单词后，输出该单词是否曾经出现过以及出现次数。
//可以尝试分别用多重集合（multiset）或映射（map）两种途径实现，将二者进行比较
//输入#结束
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
