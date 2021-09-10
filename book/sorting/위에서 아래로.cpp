#include <iostream>
#include <algorithm>

using namespace std;

int n = 0;

bool compare(int a, int b) {
	return a > b;
}

int main() {
	int result = 0;
	int arr[500] = {0,};
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n, compare);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	//cout << result << endl;
}