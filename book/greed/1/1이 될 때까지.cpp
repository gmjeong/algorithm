#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n = 0, k = 0;
	int result = 0;

	cin >> n >> k;

	while (true) {
		if (n == 1)
			break;

		if ((n % k) == 0)
			n = n / k;
		else
			n -= 1;

		result++;
	}


	cout << result << endl;

}