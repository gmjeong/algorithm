#include <iostream>
#include <string>
//#include<istream>
#include <algorithm>

using namespace std;

int main() {
	string input;
	int result  = 0;
	int x = 0, y = 0;
	int dx[] = { -2, -1, 1, 2, 2, 1, -1, -2 };
	int dy[] = { -1, -2, -2, -1, 1, 2, 2, 1 };

	getline(cin, input);
	x = input[1] - '0';
	y = input[0] - 'a' + 1;


	for (int i = 0; i < 8; i++) {
		int temp_x = x + dx[i];
		int temp_y = y + dy[i];

		if (temp_x > 8 || temp_x < 1 || temp_y > 8 || temp_y < 1) {
			continue;
		}
		result++;
	}

	cout << result << endl;
}