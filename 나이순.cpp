#include <iostream>
#include <vector>
#include <algorithm>
#include <windows.h>
#include <string>

using namespace std;

struct Person {
	int age, join;
	string name;
};
int main()
{
	int n; cin >> n;
	vector<Person> p(n);
	p[0].join = 0;
	for (int i = 0; i < n; i++) {
		cin >> p[i].age;
		cin >> p[i].name;
		p[i].join = i;
	}

	sort(p.begin(), p.end(), [](Person u, Person v){
		return u.age < v.age || (u.age==v.age && u.join < v.join);
	});

	for (auto x : p) {
		cout << x.age << " " << x.name << "\n";
	}
	system("pause");
	return 0;
}
