#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>

using namespace std;

set<int> s;
vector<int> target;

int main() {
	int n = 0, m = 0;
	
	cin >> n;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		s.insert(num);
	}

	cin >> m;


	for (int i = 0; i < m; i++) {
		int num;
		cin >> num;
		target.push_back(num);
	}


	for (int i = 0; i < m; i++) {
		if (s.find(target[i]) != s.end()) {
			cout << "yes ";
		}
		else
			cout << "no ";
	}


}