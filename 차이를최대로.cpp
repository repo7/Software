#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main() {

	int n;
	cin >> n;
	vector<int> a(n);

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.begin());

	int max = 0 ;
	do{

		int sum = 0;

		for (int i = 0; i < n; i++) {
			sum += abs(a[i] - a[i + 1]);
		}
		/*for (int i = 2; i < n + 1; i++) {
			sum += (a[n - 2] - a[n - 1]);
		}*/
		if (max < sum) {
			max = sum;
		}
	} while (next_permutation(a.begin(), a.end()));


	cout << max << "\n";
	system("pause");
	return 0;

}
