#include <iostream>
using namespace std;
class CAT
{     public:
           CAT(){
			   itsAge=new int;
			   *itsAge =5;
		   };
           CAT(const CAT& c){
			   itsAge=new int;
			   *itsAge=*c.itsAge;
		   };
          ~CAT(){     delete itsAge;   };
          int GetAge() const { return *itsAge; }
          void SetAge(int age){ *itsAge=age; }
      protected:
          int* itsAge;
};
int main(void){
	CAT c1;
	CAT c2;
	CAT c3;
	c2.SetAge(10);
	c3(c2);
	cout<<c1.GetAge()<<" "<<c2.GetAge();
	return 0;
}
