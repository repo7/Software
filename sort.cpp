#include <iostream>
#include <Windows.h>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(const int &u, const int &v) {
	return u > v;
}
int main()
{	
	vector<int> a = {5,3,2,1,4,3,3,2,1,1};

	for (int i : a) {
		cout << i << " ";
	}
	cout << "\n";

	//sort(a.begin(), a.end(), cmp);
	//greater 
	sort(a.begin(), a.end(), [](int a, int b){
		return a > b;
	});
	for (int i : a) {
		cout << i << " ";
	}
	cout << "\n";

	auto last = unique(a.begin(), a.end());
	a.erase(last, a.end());

	for (int i : a) {
		cout << i << " ";
	}
	cout << "\n";

	reverse(a.begin(), a.end());

	for (int i : a) {
		cout << i << " ";
	}
	cout << "\n";

	system("pause");
	return 0;
}
