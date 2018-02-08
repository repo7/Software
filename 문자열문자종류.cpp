#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main()
{
	string s;
	while (getline(cin, s)) {
		int lower, upper, number, space;
		lower = upper = number = space = 0;

		for (char x : s) {
			if (x >= 'a' && 'z' >= x) {
				lower += 1;
			} else if (x >= 'A' && 'Z' >= x) {
				upper += 1;
			} else if (x == ' ') {
				number += 1;
			} else if (x >= '0' && '9' >= x) {
				space += 1;
			}
		}
		cout << lower << ' ' << upper << ' ';
		cout << number << ' ' << space << '\n';
	}
}
