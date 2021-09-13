#include <iostream>
#include <algorithm>

using namespace std;

int arr[1000];

int main() {
	int n = 0;
	int start, end;
	
	cin >> n;

	arr[0] = 1;
	arr[1] = 3;

	for (int i = 2; i < n; i++) {
		arr[i] = ((arr[i - 2] * 2) + arr[i - 1]) % 796796;
	}

	cout << arr[n - 1] << endl;

}