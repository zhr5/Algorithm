#include<iostream>
using namespace std;
class Solution {
	int dp[10010] = { 1 };
public:
	int jumpFloorII(int n) {
		if (n == 1)    return 1;
		else return 2 * jumpFloorII(n - 1);
	}
};
int main() {
	Solution s;
	cout << s.jumpFloorII(2);
	return 0;
}
/*
链接：https://www.nowcoder.com/questionTerminal/22243d016f6b47f2a6928b4313c85387
来源：牛客网

class Solution{
public:
	int jumpFloorII(int number) {
	//通过移位计算2的次方
		return 1<<(number-1);
	}
};
*/