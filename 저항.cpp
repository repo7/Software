#include <set>
#include <iostream>
#include <Windows.h>
#include <string>
#include <map>
using namespace std;

int main()
{
	map<string, int> d = {

		{ "black", 0 }, { "brown", 1 }, { "red", 2 },

		{ "orange", 3 }, { "yellow", 4 }, { "green", 5 },

		{ "blue", 6 }, { "violet", 7 }, { "grey", 8 },

		{ "white", 9 }

	};

	string a, b, c;
	cin >> a >> b >> c;
	
	cout << d[a] << d[b] * pow(10, d[c]);
	
	
	printf("\n");
	system("pause");
	return 0;
}
