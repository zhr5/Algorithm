class Solution {
	int dp[10001] = { 0 };
public:
	int jumpFloor(int number) {
		if (number == 1) return 1;
		if (number == 2) return 2;
		if (dp[number] != 0)    return dp[number];
		else {
			dp[number] = jumpFloor(number - 1) + jumpFloor(number - 2);
			return dp[number];
		}
	}
};