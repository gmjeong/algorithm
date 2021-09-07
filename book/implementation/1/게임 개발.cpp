#include <iostream>
#include <string>
//#include<istream>
#include <algorithm>

using namespace std;

int x = 0, y = 0, d = 0;
int n = 0, m = 0;

int direction[4] = { 0, 1, 2, 3 };
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int path[50][50] = { 0, };
int map[50][50] = { 0, };

void turn_left() {
	d -= 1;
	if (d == -1)
		d = 3;
}

int main() {
	int result = 0;
	int count = 0;

	cin >> n >> m;
	cin >> x >> y >> d;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
		}
	}
	path[x][y] = 1;
	result++;

	while (true) {
		turn_left();

		int temp_x = x + dx[d];
		int temp_y = y + dy[d];
		if (path[temp_x][temp_y] == 0 && map[temp_x][temp_y] == 0) {
			x = temp_x;
			y = temp_y;
			path[x][y] = 1;
			result++;
			count = 0;
		}
		else {
			count++;
		}

		if (count == 4) {
			temp_x = x - dx[d];
			temp_y = y - dy[d];

			if (map[temp_x][temp_y] == 0) {
				x = temp_x;
				y = temp_y;
				count = 0;
			}
			else
				break;
		}

	}



	cout << result << endl;
}