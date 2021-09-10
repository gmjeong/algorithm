#include <iostream>
#include <stdio.h>
#include <queue>

using namespace std;

int n = 0, m = 0;

int map[200][200] = { 0, };

int dx[4] = {-1, 1, 0, 0};
int dy[4] = { 0, 0, -1, 1 };

int bfs(int x, int y) {
	queue<pair<int, int>> q;

	q.push({x, y});

	while (!q.empty()) {
		pair<int, int> temp = q.front();
		x = temp.first;
		y = temp.second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int temp_x = x + dx[i];
			int temp_y = y + dy[i];

			if (temp_x < 0 || temp_x >= n || temp_y < 0 || temp_y >= m) {
				continue;
			}

			if (map[temp_x][temp_y] == 0) {
				continue;
			}
			if (map[temp_x][temp_y] == 1) {
				map[temp_x][temp_y] = map[x][y] + 1;
				
				q.push({ temp_x, temp_y });
			}
		}
	}

	return map[n - 1][m - 1];

}


int main() {
	int result = 0;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%1d", &map[i][j]);
		}
	}

	cout << bfs(0, 0) << endl;

	//cout << result << endl;
}