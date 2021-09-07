#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n = 0, m = 0;
	int min_val = 10001;
	int temp = 0;
	int result = 0;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		min_val = 10001;
		for (int j = 0; j < m; j++) {
			cin >> temp;
			min_val = min(min_val, temp);
		}
		result = max(result, min_val);
	}


	cout << result << endl;

}