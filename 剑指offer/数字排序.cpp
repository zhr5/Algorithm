#include<iostream>
#include<string>
using namespace std;

int main() {
	string A, B;
	cin >> A >> B;
	int La = A.size(), Lb = B.size();
	int ha[11] = { 0 }; int hb[11] = { 0 };
	for (int i = 0; i<Lb; i++) {
		hb[B[i] - '0']++;
	}
	for (int i = 0; i<La; i++) {
		ha[A[i] - '0']++;
	}
	for (int i = 0; i<10; i++) {
		if (!hb[i]) {
			while (ha[i]) {
				printf("%d", i);
				ha[i]--;
			}
		}
	}
	for (int i = 0; i<10; i++) {
		if (hb[i]) {
			while (ha[i]) {
				printf("%d", i);
				ha[i]--;
			}
		}
	}
	return  0;
}