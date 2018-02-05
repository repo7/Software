#include <set>
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	set<int> s;
	int n;
	// input
	cin >> n;
	while (n--)
	{
		int c;
		cin >> c;
		s.insert(c);
	}
	// check
	cin >> n;
	while (n--)
	{
		int c;
		cin >> c;
		cout << s.count(c) << " ";
	}
	printf("\n");
	system("pause");
	return 0;
}
