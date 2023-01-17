#include <iostream>
#include <fstream>
using namespace std;
class Dog{
	private:
		int w;
		int a;
	public:
		Dog(int ww=0,int aa=0):w(ww),a(aa){
		};
		int getw(){
			return w;
		}
		int geta(){
			return a;
		}
};
int main(){
	Dog dog1(5,10);
	ofstream os("test",ios_base::out|ios_base::binary);
	os.write(reinterpret_cast<char*>(&dog1),sizeof(dog1));
	os.close();
	
	ifstream is("test",ios_base::in|ios_base::binary);
	if(is){
		Dog dog2;
		is.read(reinterpret_cast<char*>(&dog2),sizeof(dog2));
		cout<< "Weight:"<<dog2.getw()<<" "<<"Age:"<<dog2.geta() <<endl;
	}else{
		cout<<"ERROR:fail"<<endl; 
	}
	return 0;
}
