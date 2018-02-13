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
	int n; cin >> n;
	vector<string> s(n);

	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
	}
	sort(s.begin(), s.end(), [](string u, string v){
		return (make_pair(u.size(), u) < make_pair(v.size(), v));
	});
	auto last = unique(s.begin(), s.end());
	s.erase(last, s.end());
	
	printf("\n");

	for (string x : s)
	{
		cout << x << "\n";
	}
	system("pause");
	return 0;
}
