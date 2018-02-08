#include <iostream>
#include <Windows.h>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{	
	vector<int> a = {1,4,1,2,4,2,4,2,3,4,4};
	auto it= find(a.begin(), a.end(), 4);
	cout << *it << "의위치:" <<it - a.begin() ;
	system("pause");
	// 1 : 0 
	// 2 : 3
	// 3 : 8 
	return 0;
}
