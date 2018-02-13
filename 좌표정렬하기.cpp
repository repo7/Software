#include <iostream>
#include <Windows.h>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
struct point {
	int x, y;
};
bool cmp(point &u, point &v) {
	return make_pair(u.x, u.y) < make_pair(v.x, v.y);
}
int main()
{
	int n; cin >> n;
	vector<point> v(n);
	
	for (int i = 0; i < n; i++)
	{
		cin >> v[i].x >> v[i].y;
	}
	sort(v.begin(), v.end(), cmp);
	for (point p : v)
	{
		cout << p.x << " " << p.y << "\n";
	}
	cout << endl;

	system("pause");
	return 0;
}
