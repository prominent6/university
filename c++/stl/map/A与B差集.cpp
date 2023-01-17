#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;
int main() {
	map<int, int> mp;
	int T, n,m,a[101];
	cin >> T;
	while (T) {
		vector<int> vtr;
		cin >> n >> m;
		int s;
		for (int i = 0; i < n; i++) cin >> a[i];
		sort(a, a + n);
		for (int j = 0; j < m; j++) {
			cin >> s;
			mp[s] = 1;
		}
		for (int i = 0; i < n; i++) {
			if (mp[a[i]] == 0) {
				vtr.push_back(a[i]);
			}
		}
		if(vtr.size()){
			for(unsigned int i=0;i<vtr.size();i++){
				cout<<vtr[i];
				if(i<vtr.size()-1) cout<<" ";
			}
		}else cout << "NULL";
		cout << endl;
		T--;
		mp.clear();  //°¡°¡°¡°¡Â©Â©Â© 
	}
	return 0;
}

