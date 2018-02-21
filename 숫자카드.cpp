#include <iostream>
#include <algorithm>
#include <Windows.h>
#include <vector>

using namespace std;

int main() {
	vector<int> a = { 6,3,2,10,-10 };
	sort(a.begin(), a.end());
	int m; cin >> m;
	int card;
	while (m--) {
		cin >> card;
		if (binary_search(a.begin(), a.end(), card)) {
			cout << true << " ";
		}
		else {
			cout << false << " ";
		}
	}
	printf("\n");
	system("pause");
	return 0;
}
