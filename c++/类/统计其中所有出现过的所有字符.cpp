#include  <iostream>
#include  <string>
using  namespace  std;

class  MyChar
{
public:
        MyChar():num(0){}
        char  ch;        //字符
        int  num;        //出现次数
};

class  MyString:  public  string
{
public:
        void  input(){
                getline(cin,*this);  //输入一行，支持空格
                sum=0;
        }
        void  putchar(char  ch);  //放入字符
        void  compute();
        void  output();
private:
        MyChar chars[300];  //字符计数
        int  sum;
};
//添加你的代码
void  MyString::putchar(char  ch)
{
        for(int  i=0;i<sum;i++)
        {
                if(chars[i].ch==ch)
                {
                        chars[i].num++;
                        return;
                }
        }
        chars[sum].ch=ch;
        chars[sum].num++;
        sum++;
}
void  MyString::compute(){
	//分析字符出现频次
	for(unsigned int i=0;i<(*this).length();i++){
		putchar((*this)[i]);
	}
for(int i=0;i<=sum-2;i++){
	for(int j=0;j<=sum-2-i;j++){
		if(chars[j+1].num>chars[j].num){
			MyChar t;
			t=chars[j];
			chars[j]=chars[j+1];
			chars[j+1]=t;
		}
	} 
}
//	int temp;
//	for(int i=0;i<=sum-2;i++)
//	{
//		temp=chars[i].num;
//		for(int j=i+1;j<=sum-1;j++){
//			if(chars[j].num>temp) temp=chars[j].num;
//			if(temp!=chars[i].num)
//			{
//				MyChar t;
//				t=chars[i];
//				chars[i]=chars[j];
//				chars[j]=t;
//			}
//		}
//	}

}
void  MyString::output()
{
    //输出分析结果
    for(int i=0;i<sum;i++){
    	if(i%4==0&&i!=0) cout<<endl;
    	cout<<chars[i].ch<<"-"<<chars[i].num<<" ";
	}
}
//使得程序正确执行
int  main()
{
        MyString  s;
        s.input();
        s.compute();
        s.output();
        return  0;
}
