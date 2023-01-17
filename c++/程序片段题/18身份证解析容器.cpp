#include <iostream>
using namespace std;

int main()
{
	string sId;
	cin >>sId;
	
	cout << "Area Number: " << sId.substr(0,6) << endl;
	cout << "Birth Date: " << sId.substr(6,8) << endl;
	return 0;
}
