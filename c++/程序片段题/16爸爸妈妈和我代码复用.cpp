#include <iostream>
using namespace std;

class Daddy {
public:
	string sName;
	void contribute()
	{
		cout << "Daddy " << sName << "'s duty: Driving & Building Shelter.\n";
	}
};

class Mummy{
public:
	string sName;
	void contribute(){
		cout << "Mummy " << sName << "'s duty: Prepare Food.\n";
	}
};

class Brother {
public:
	string sName;
	void contribute(){
		cout << "Brother " << sName << "'s duty: Joking.\n";
	}
};

class MySelf {
public:
	string sName;
	void contribute(){
		cout << sName << "'s  duty: Taking Photos.\n";
	}
};

class Family {
public:
	Mummy m;
	Daddy d;
	Brother b;
	MySelf s;
	
	void outdoorPicnic(){
		printf("---------outdoor picnic------------\n");
		d.contribute();
		m.contribute();
		b.contribute();
		s.contribute();
	}
};

int main()
{
	Family myFamily;
	myFamily.m.sName = "Emily";   //妈妈的姓名
	myFamily.m.contribute();
	myFamily.d.sName = "Jack";    //爸爸的姓名
	myFamily.d.contribute();
	myFamily.b.sName = "Tom";     //弟弟的姓名
	myFamily.b.contribute();
	myFamily.s.sName = "Dora";    //我的姓名
	myFamily.s.contribute();
	
	myFamily.outdoorPicnic();
	return 0;
}
