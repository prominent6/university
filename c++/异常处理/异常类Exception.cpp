#include  <iostream>
using  namespace  std;
class  Exception
{
	public:
        virtual  void  showMessage()=0;
};
//����һ��OutOfMemory����Ӧ�ڴ治ס
class OutOfMemory:public Exception{
	public:
		OutOfMemory(){
		};
		~OutOfMemory(){
		};
		virtual  void  showMessage();
};
void OutOfMemory::showMessage() {
	cout << "Out of Memory��" << endl;
}

//RangeError����Ӧ������������ƶ���Χ��
class RangeError:public Exception{
	private:
		int num;
	public:
		RangeError(int n):num(n){
		};
		~RangeError(){
		};
		virtual  void  showMessage();
};
void  RangeError::showMessage(){
	cout<<"Exception:Range Error!"<<endl;
}
int  main()
{
    try
    {
        int  n;
        cout<<"Input  n(1<=n<=100):";
        cin>>n;
        if(n<1||n>100) throw RangeError(n);
		cout<<"n:"<<n<<endl;
    }catch(Exception&  e)
    {
        e.showMessage();
    }
}
