#include <iostream>
#include <Windows.h>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{	
	int n;
	int size = 0;
	cin >> n;
	vector<int> s(n);
	while (n--) {
		cin >> s[size++];
	}
	int f; cin >> f;
	cout << count(s.begin(), s.end(), f);
	system("pause");
	return 0;
}
