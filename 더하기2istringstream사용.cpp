#include <iostream>
#include <Windows.h>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string s;
	string line;
	while (cin >> line) {
		s += line;
	}

	istringstream sin(s);

	string number;
	int sum = 0;
	
	while (getline(sin, number, ',')) {

		sum += stoi(number);
	}

	cout << sum << '\n';
	system("pause");

	return 0;
}
