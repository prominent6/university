#include <iostream>
#include <cmath>
using namespace std;
class Cat{
	public:
		Cat(){
			numOfCats++;
		}
		~Cat(){numOfCats--;}
		static int getNumOfCats(){
			return numOfCats;
		}
	private:
		static int numOfCats;
};
int Cat::numOfCats  =  0;
int main()
{
    Cat c;
    cout<<"Num:"<<Cat::getNumOfCats()<<endl;
    Cat carr[4];  //
    cout<<"Num:"<<Cat::getNumOfCats()<<endl;
    return 0;
}
