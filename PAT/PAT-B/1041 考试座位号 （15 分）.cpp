#include<iostream>
using namespace std;
 struct student {
	long long testid;
	int locate;
}info[1001];
int main() {
	int N, machine_locate, locate1;
	long long testseat;
	cin >> N;
	while (N--) {
		cin >> testseat >> machine_locate >> locate1;
		info[machine_locate].testid = testseat;
		info[machine_locate].locate = locate1;
	}
	int M;
	cin >> M;
	int m[1001];
	for (int j = 0; j<M; j++) {
		cin >> m[j];
	}
	for (int i = 0; i<M; i++) {
		cout << info[m[i]].testid << " " << info[m[i]].locate << endl;
	}
	return 0;
}