#include <iostream>
#include <string>
//#include<istream>
#include <algorithm>

using namespace std;

int main() {
	int n = 0;
	int x = 1, y = 1;
	string temp;
	//char aa[100];

	int dx[4] = { 0, 0, -1, 1 };
	int dy[4] = { -1, 1, 0, 0 };
	char move_types[4] = { 'L', 'R', 'U', 'D' };

	cin >> n;
	cin.ignore();
	//cin.getline(aa, 100);
	getline(cin, temp);

	//cout << temp << endl;
	//cout << "temp[0] " << temp[0] << endl;
	//cout << "temp[1] " << temp[1] << endl;


	for (int i = 0; i < temp.size(); i += 2) {
		for (int j = 0; j < 4; j++) {
			if (temp[i] == move_types[j]) {
				if (((x + dx[j]) < 1) || ((x + dx[j] > n)))
					break;
				if (((y + dy[j]) < 1) || ((y + dy[j] > n)))
					break;
				x += dx[j];
				y += dy[j];
				break;
			}
		}
	}

	cout << x << " " << y << endl;

}