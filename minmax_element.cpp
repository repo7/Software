#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main() {

	
	vector<int> ABC;
	ABC = {6,19,2};

	auto it = min_element(ABC.begin(), ABC.end());
	cout << *it << endl;

	it = max_element(ABC.begin(), ABC.end());
	cout << *it << endl;

	auto p= minmax_element(ABC.begin(), ABC.end());

	cout << *p.first << " " << *p.second;
	printf("\n");

	system("pause");
	return 0;

}
