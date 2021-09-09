#include <iostream>
#include <string>
//#include<istream>
#include <algorithm>

using namespace std;

int n = 0, m = 0;

int map[1000][1000] = { 0, };

bool dfs(int x, int y) {
	if (x < 0 || x >= n || y < 0 || y >= m) {
		return false;
	}
	
	if (map[x][y] == 0) {
		map[x][y] = 1;
		dfs(x - 1, y);
		dfs(x, y - 1);
		dfs(x + 1, y);
		dfs(x, y + 1);
		return true;
	}
	return false;

}


int main() {
	int result = 0;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%1d", &map[i][j]);
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (dfs(i, j))
				result++;
		}
	}


	cout << result << endl;
}