#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<int> item;
vector<int> target;

int binary_search(vector<int> arr, int target, int start, int end) {
	while (start <= end) {
		int mid = (start + end) / 2;

		if (arr[mid] == target) {
			return mid;
		}
		else if (arr[mid] > target) {
			end = mid - 1;
		}
		else {
			start = mid + 1;
		}
	}
	return -1;
}

int main() {
	int n = 0, m = 0;
	
	cin >> n;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		item.push_back(num);
	}

	cin >> m;


	for (int i = 0; i < m; i++) {
		int num;
		cin >> num;
		target.push_back(num);
	}

	sort(item.begin(), item.end());

	for (int i = 0; i < m; i++) {
		if (binary_search(item, target[i], 0, n - 1) != -1) {
			cout << "yes ";
		}
		else
			cout << "no ";
	}


}