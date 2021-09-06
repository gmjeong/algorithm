#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n = 0, m = 0, k = 0;
	int num[1000] = {0,};
	int result = 0;

	cin >> n >> m >> k;
	cout << "n: " << n << " m: " << m << " k: " << k << endl;
	
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	sort(num, num + n, greater<int>());

	while (m > 0) {
		for (int i = 0; i < k; i++) {
			if (m == 0)
				break;
			result += num[0];
			m--;
		}
		if (m == 0)
			break;
		result += num[1];
		m--;
	}

	cout << result << endl;

}