#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main()
{
	string s;
	int cnt = 0;
	while (cin >> s)
	{
		cnt += 1;
	}
	cout << cnt << '\n';

	system("pause");
	return 0;
}
