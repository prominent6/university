#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	set<string> st;
	int t;
	cin >> t;
	while (t) {
		int n;
		cin >> n;
		while (n) {
			string s;
			cin >> s;
			//for(unsigned int i=0;i<s.length();i++) s[i]=tolower(s[i]);
			transform(s.begin(), s.end(), s.begin(), ::tolower);
			//cout<<s<<endl;
			st.insert(s);
			n--;
		}
		cout << st.size() << endl;
		t--;
		st.clear();
	}
	return 0;
}
