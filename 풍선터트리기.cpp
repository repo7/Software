#include <Windows.h>
#include <iostream>
#include <list>

using namespace std;

int main() {

	int n;

	list<pair<int, int>> a;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		int x; cin >> x;
		a.push_back({ x, i });
	}

	// key-value {step, number}
	auto it = a.begin();

	for (int i = 0; i < n - 1; i++)
	{
		cout << it->second << " "; // bombed!

		int step = it->first;
		if (step > 0) {
			auto temp = it;
			temp++;
			if (temp == a.end())
			{
				temp = a.begin();
			}
			a.erase(it);
			it = temp;
			for (int i = 1; i < step; i++)
			{
				it++;
				if (it == a.end())
				{
					it = a.begin();
				}
			}
		}
		else if (step < 0) {
			step = -step;
			auto temp = it;

			if (temp == a.begin())
			{
				temp = a.end();
			}
			temp--;

			a.erase(it);
			it = temp;
			for (int i = 1; i < step; i++)
			{
				if (it == a.begin())
				{
					it = a.end();
				}
				it--;
			}
		}
		else
		{

		}
	}
	cout << a.front().second << "\n";

	system("pause");
	return 0;

}
