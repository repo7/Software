#include <iostream>
#include <Windows.h>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string s;
	int sum = 0;
	
	while (getline(cin, s, ',')) {
			sum += stoi(s);
		}

	cout << sum << '\n';

	return 0;
}
