#include <iostream>
#include <algorithm>
#include <vector>

#define INF 1e9

using namespace std;

vector<pair<int, int>> v[10001];
int d[10001];
bool visited[10001];
int n = 0, m = 0, s = 0;

int getMinNode() {
	int min = INF;
	int index = 0;

	for (int i = 1; i <= n; i++) {
		if (d[i] < min && !visited[i]) {
			min = d[i];
			index = i;
		}
	}
	return index;
}

void dijkstra(int start) {
	d[start] = 0;
	visited[start] = true;

	for (int i = 0; i < v[start].size(); i++) {
		d[v[start][i].first] = v[start][i].second;
	}

	for (int i = 0; i < n - 1; i++) {
		int now = getMinNode();
		visited[now] = true;
		for (int j = 0; j < v[now].size(); j++) {
			int cost = d[now] + v[now][j].second;
			if (cost < d[v[now][j].first]) {
				d[v[now][j].first] = cost;
			}
		}
	}

}

int main() {
	int total = 0;

	cin >> n >> m >> s;

	for (int i = 0; i < m; i++) {
		int temp[3];
		cin >> temp[0] >> temp[1] >> temp[2];
		v[temp[0]].push_back({ temp[1], temp[2] });
	}

	fill_n(d, 10001, INF);
	
	dijkstra(s);
}