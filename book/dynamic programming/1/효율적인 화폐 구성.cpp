#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> v;

int main() {
	int n = 0, m = 0;
	int total = 0;

	cin >> n >> m;
	
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		v.push_back(num);
	}

	vector<int> d(m + 1, 99999);

	d[0] = 0;

	for (int i = 0; i < n; i++) {
		for (int j = v[i]; j <= m; j++) {
			d[j] = min(d[j], d[j - v[i]] + 1);	
		}
	}

	if (d[m] == 99999) {
		cout << "-1" << endl;
	}
	else {
		cout << d[m] << endl;
	}

}