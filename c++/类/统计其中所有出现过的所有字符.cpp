#include  <iostream>
#include  <string>
using  namespace  std;

class  MyChar
{
public:
        MyChar():num(0){}
        char  ch;        //�ַ�
        int  num;        //���ִ���
};

class  MyString:  public  string
{
public:
        void  input(){
                getline(cin,*this);  //����һ�У�֧�ֿո�
                sum=0;
        }
        void  putchar(char  ch);  //�����ַ�
        void  compute();
        void  output();
private:
        MyChar chars[300];  //�ַ�����
        int  sum;
};
//�����Ĵ���
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
	//�����ַ�����Ƶ��
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
    //����������
    for(int i=0;i<sum;i++){
    	if(i%4==0&&i!=0) cout<<endl;
    	cout<<chars[i].ch<<"-"<<chars[i].num<<" ";
	}
}
//ʹ�ó�����ȷִ��
int  main()
{
        MyString  s;
        s.input();
        s.compute();
        s.output();
        return  0;
}
