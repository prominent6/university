#include <iostream>
using namespace std; 
class animal
{
	private:
		int h;
	public:
		animal(int height=5)
		{
			h=height;
			cout<<"animal construct"<<endl;
			cout<<h<<endl;
		}
		virtual void print(){
			cout<<h<<endl;
		}
};
class fish:public animal
{
	private:
		int f;
	public:
		fish(int fi=6):animal(fi*4)
		{
			f=fi;
			cout<<"fish construct"<<endl;
			cout<<f<<endl;
		}
		void print(){
			cout<<f<<endl; 
		}
};
int main(void)
{
	animal an(200);
	fish fh(100);
	an.print();
	fh.print();
	an=fh;
	an.print();
	return 0;
}

