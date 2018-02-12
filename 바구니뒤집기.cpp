#include <algorithm>
#include <iostream>
#include <Windows.h>
#include <vector>

using namespace std;

int main()
{
	int n; cin >> n;
	vector<int> v(n,0);
	for (int i = 1; i <= n; i++) {
		v[i-1]=i;
	}
	int m; cin >> m;
	
	while (m--) {
		int start,end;
		cin >> start >> end;
		reverse(v.begin() + (start-1), v.begin() + end);
	}

	for (auto x : v) {
		cout << x << " ";
	}
	cout << '\n';

	system("pause");
	return 0;
}
