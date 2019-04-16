#include<iostream>
using namespace std;
int dp[10001] = { 0};
int Fibonacci(int n) {
	if (n == 0)    return 0;
	if (n == 1||n==2)    return 1;
	if (dp[n] != 0) { return dp[n]; }
	else {
		dp[n] = Fibonacci(n - 1) + Fibonacci(n - 2);
		return dp[n];
	}
}
int main() {
	cout << Fibonacci(3) << endl;
	return 0;
}