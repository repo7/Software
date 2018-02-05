// set::insert (C++98)
#include <iostream>
#include <set>
#include <Windows.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	set<int> s;
	while (n--)
	{
		int c;
		cin >> c;
		s.insert(c);
	}
	for (int c : s)
	{
		cout << c << " ";
	}
	cout << "\n";

	cout << "찾기 횟수입력" << "\n";
	cin >> n;
	while (n--)
	{
		int c;
		cin >> c;
		auto it = s.find(c);

		if (it == s.end()) {
			cout << "end" << "\n";
		}
		else {
			cout << *it << endl;
		}
	}
	system("pause");
	return 0;
}
