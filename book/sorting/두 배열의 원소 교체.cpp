#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

bool compare(int a, int b) {
	return a > b;
}

int main() {
	int n = 0, k = 0;
	long long result = 0;
	vector<int> a;
	vector<int> b;
	
	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		a.push_back(num);
	}

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		b.push_back(num);
	}

	sort(a.begin(), a.end());
	sort(b.begin(), b.end(), compare);

	for (int i = 0; i < k; i++) {
		if (a[i] < b[i]) {
			swap(a[i], b[i]);
		}
		else
			break;
	}

	for (int i = 0; i < n; i++) {
		result += a[i];
	}

	cout << result << endl;
}