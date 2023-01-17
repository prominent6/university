#include  <iostream>
using  namespace  std;
class  Exception
{
	public:
        virtual  void  showMessage()=0;
};
//派生一个OutOfMemory类响应内存不住
class OutOfMemory:public Exception{
	public:
		OutOfMemory(){
		};
		~OutOfMemory(){
		};
		virtual  void  showMessage();
};
void OutOfMemory::showMessage() {
	cout << "Out of Memory！" << endl;
}

//RangeError类响应输入的数不在制定范围内
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
