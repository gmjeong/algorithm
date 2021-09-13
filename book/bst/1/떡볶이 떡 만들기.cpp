#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>

using namespace std;

vector<int> v;

int main() {
	int n = 0, m = 0;
	int result = 0;
	int start, end;
	
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		v.push_back(num);
	}
	start = 0;
	end = *max_element(v.begin(), v.end());;

	while (start <= end) {
		long long int total = 0;
		int mid = (start + end) / 2;

		for (int i = 0; i < n; i++) {
			if (v[i] > mid) {
				total += v[i] - mid;
			}
		}
		if (total < m) {
			end = mid - 1;
		}
		else {
			result = mid;
			start = mid + 1;
		}

	}
	cout << result << endl;



}