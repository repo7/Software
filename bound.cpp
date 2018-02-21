#include <iostream>
#include <algorithm>
#include <Windows.h>
#include <vector>

using namespace std;

int main() {
	vector<int> a = { 1, 3, 4, 5, 7, 7, 8 };
	int s = 7;
	auto l = lower_bound(a.begin(), a.end(), s);
	auto r = upper_bound(a.begin(), a.end(), s);

	cout << "vector<int> a = \"" ;
	for (auto i : a) {
		cout << i << " ";
	}
	cout << "\"" << "\n";
	cout << "selector : " << s << '\n';
	cout << "lower_bound :" << (l - a.begin()) << ' ';
	cout << "upper_bound:" << (r - a.begin()) << ' ';
	printf("\n");

	system("pause");
	return 0;
}
