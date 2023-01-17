#include <iostream>
#include <vector>
using namespace std;

template <typename T, typename V>
T binarySearch(T begin, T end, const V v){
	auto endOriginal = end;
	while (begin!=end) {
		auto mid=begin+(end-begin)/2;
		if (*mid==v)
			return mid;
		else if (v < *mid)
			end = mid;
		else
			begin=mid+1;		
	}
	return endOriginal;
}


int main() {
	vector<int> a {1,3,5,7,9,11,22,77,88,100,999,2132,6789};
	int v;
	cin >> v;
	
	auto r = binarySearch(a.cbegin(),a.cend(), v);
	if (r==a.cend())
		cout << "Not found." << endl;
	else
		cout << "Found: " << *r << endl;
	
	return 0;
}
