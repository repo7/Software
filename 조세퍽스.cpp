#include <iostream>
#include <queue>
#include <Windows.h>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	queue<int> q;
	for (int i = 0; i < n; i++)
	{
		q.push(i+1);
	}
	printf("<");
	while (!q.empty())
	{
		for (int i = 1; i <= m; i++)
		{
			q.push(q.front());
			q.pop();
		}
		cout << q.front();
		if (q.size() == 1) {
			printf(">");
		}
		else {
			printf(" ");
		}
		q.pop();
	}
	system("pause");
	return 0;
}
