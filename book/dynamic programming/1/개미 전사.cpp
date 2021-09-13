#include <iostream>
#include <algorithm>

using namespace std;

int arr[100];
int d[100];

int main() {
	int n = 0;
	int start, end;
	
	cin >> n;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		arr[i] = num;
	}

	d[0] = arr[0];
	d[1] = max(arr[0], arr[1]);

	for (int i = 2; i < n; i++) {
		d[i] = max(d[i - 1], d[i - 2] + arr[i]);
	}

	cout << d[n - 1] << endl;

}