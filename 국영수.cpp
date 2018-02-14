#include <iostream>
#include <Windows.h>
#include <string>
#include <algorithm>
#include <vector>
#include <tuple>

using namespace std;
struct Person {
	int 국어, 영어, 수학; 
	string 이름; 
};
/*
bool cmp(const Person &u, const Person &v) {

    if (u.kor > v.kor) {
        return true;
    } else if (u.kor == v.kor) {

        if (u.eng < v.eng) {
            return true;
        } else if (u.eng == v.eng) {

            if (u.math > v.math) {
                return true;
            } else if (u.math == v.math) {
                return u.name < v.name;
            }
        }
    }
    return false;
}
//*/

bool cmp(Person &u, Person &v) {
	return make_tuple(-u.국어, u.영어, -u.수학, u.이름) < make_tuple(-v.국어, v.영어, -v.수학, v.이름);
}

int main()
{
	int n; cin >> n;
	vector<Person> v(n);
	
	for (int i = 0; i < n; i++)
	{
		cin >> v[i].이름;
		cin >> v[i].국어 >> v[i].영어 >> v[i].수학;
	}
	sort(v.begin(), v.end(), cmp);
	for (Person p : v)
	{
		cout << p.이름 << "\n";
	}
	cout << endl;

	system("pause");
	return 0;
}
