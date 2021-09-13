#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int arr[1000000] = {0, };
vector<int> target;

int main() {
	int n = 0, m = 0;
	
	cin >> n;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		arr[num]++;
	}

	cin >> m;


	for (int i = 0; i < m; i++) {
		int num;
		cin >> num;
		target.push_back(num);
	}


	for (int i = 0; i < m; i++) {
		if (arr[target[i]] == 0) {
			cout << "no ";
		}
		else
			cout << "yes ";
	}


}