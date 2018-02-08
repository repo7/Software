#include <iostream>
#include <Windows.h>
#include <string>
#include <algorithm>

using namespace std;

int main()
{	
	string name;
	cin >> name;

	for (int i = 'a'; i <= 'z'; i++) {
		cout << count(name.begin(), name.end(), i) << " ";
	}
	system("pause");
	return 0;
}
