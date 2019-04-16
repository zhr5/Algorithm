#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(int a, int b) {
	return a >= b;
}
int num[10001];
int main() {
	int n;
	cin >> n;
	int len = n;
	int i = 0;
	while (n--) {
		cin >> num[i++];
	}
	sort(num, num + len, cmp);
	int m1 = num[0] + num[len - 1];
	int m2 = num[len / 2 - 1] + num[len / 2];
	
	cout << abs(m1 - m2);
	return 0;

}