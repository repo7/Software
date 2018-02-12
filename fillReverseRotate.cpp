#include <algorithm>
#include <iostream>
#include <Windows.h>
#include <vector>

using namespace std;

int main()
{
	vector <int> a = {1,4,2,1,4,2,2,3,4,4};
	for (int x : a) {
		cout << x << " ";
	}
	printf("\n");

  fill(a.begin(), a.end(), 0);
	for (int x : a) {
		cout << x << " ";
	}
	printf("\n");
  
	reverse(a.begin(), a.end());
	for (int x : a) {
		cout << x << " ";
	}
	printf("\n");

	rotate(a.begin(),a.begin()+2,a.end());
	for (int x : a) {
		cout << x << " ";
	}
	printf("\n");

	system("pause");
	return 0;
}
