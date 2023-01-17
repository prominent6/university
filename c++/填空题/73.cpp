#include <iostream>
#include <string.h>
using namespace std;
class Toy
{
public:
	Toy(char* _n) { strcpy (name,_n); count++;}
	~Toy(){ count--; }
	char* GetName(){ return name; }
	static int getCount(){ return count; }
private:
	char name[10];
	static int count;
};
int Toy::count=0;
int main()
{
	Toy t1("Snoopy"),t2("Mickey"),t3("Barbie");
	cout<<t1.getCount()<<endl;
	return 0;
}
