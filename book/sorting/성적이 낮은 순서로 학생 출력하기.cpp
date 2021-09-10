#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;


class Student {
public:
	string name;
	int score;

	Student(string name, int score) {
		this->name = name;
		this->score = score;
	}

	bool operator <(Student other) {
		return this->score < other.score;
	}
};

bool compare(int a, int b) {
	return a < b;
}

vector<Student> v;
int n = 0;

int main() {
	int result = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string name;
		int score;
		cin >> name >> score;
		v.push_back(Student(name, score));
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++) {
		cout << v[i].name << " ";
	}

	//cout << result << endl;
}