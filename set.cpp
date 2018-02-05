#include <list>
#include <set>
#include <map>
#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	set<int> s;
	s.insert(1);
	s.insert(3);
	s.insert(2);

	cout << "size "<<  s.size() << endl;
	pair<set<int>::iterator, bool> rlt = s.insert(4);
	cout << *rlt.first << endl;
	cout << rlt.second << endl;
	printf("\n");

	pair<set<int>::iterator, bool> rlt1 = s.insert(3);
	cout << *rlt1.first << endl;
	cout << rlt1.second << endl;
	printf("\n");

	pair<set<int>::iterator, bool> rlt2 = s.insert(2);
	cout << *rlt2.first << endl;
	cout << rlt2.second << endl;
	printf("\n");

	pair<set<int>::iterator, bool> rlt5 = s.insert(5);
	cout << *rlt5.first << endl;
	cout << rlt5.second << endl;
	printf("\n");

	system("pause");
	return 0;
}
