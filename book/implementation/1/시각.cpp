#include <iostream>
//#include <string>
//#include<istream>
//#include <algorithm>

using namespace std;

int main() {
	int n = 0;
	int result  = 0;

	cin >> n;

	for (int i = 0; i <= n; i++ ) {
		for (int j = 0; j < 60; j++) {
			for (int k = 0; k < 60; k++) {
				if ((i % 10 == 3) || (j / 10 == 3) || (j % 10 == 3) || (k / 10 == 3) || (k % 10 == 3))
					result++;
			}
		}
	}

	cout << result << endl;
}