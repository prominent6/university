#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int add(int n,int m){
	return n+m;
} 
double add(double n,double m){
	return n+m;
}
string add(string n,string m){
	return n+m;
}
int main()
{
    int a, b;
    double c, d;
    string s1, s2;

    cin >> a >> b;
    cin >> c >> d;
    cin >> s1 >> s2;

    cout << add(a, b) << endl;
    cout << fixed << setprecision(2) << add(c, d) << endl;
    cout << add(s1, s2) << endl;

    return 0;
}

