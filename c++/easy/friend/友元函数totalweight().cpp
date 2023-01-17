#include <iostream>
using namespace std;
class car;
class boat{
	private:
		int weight;
	public:
		boat(int w=0):weight(w){
		};
		friend int totalweight(boat &b,car &c);
};
class car{
	private:
		int weight;
	public:
		car(int w=0):weight(w){
		};
		friend int totalweight(boat &b,car &c);
};
int totalweight(boat &b,car &c){
	return b.weight+c.weight;
}
int main()
{
  int c,b;
  cin>>c>>b;
  car c1(c);
  boat b1(b);
  cout<<totalweight(b1,c1)<<endl;
}

