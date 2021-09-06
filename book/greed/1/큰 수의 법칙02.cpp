#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n = 0, m = 0, k = 0;
	int num[1000] = { 0, };
	int temp = 0;
	int result = 0;

	cin >> n >> m >> k;
	//cout << "n: " << n << " m: " << m << " k: " << k << endl;

	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	sort(num, num + n, greater<int>());

	temp = (m / (k + 1)) * k;
	temp += (m % (k + 1));

	result = temp * num[0];
	result += (m - temp) * num[1];

	cout << result << endl;

}