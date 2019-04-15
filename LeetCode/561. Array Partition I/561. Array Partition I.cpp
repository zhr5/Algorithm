#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

class Solution {
public:
	int arrayPairSum(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		int sum=0;
		for (int i = 0; i < nums.size() ; i=i+2) {
			sum += nums[i];
		}
		return sum;
	}
};

int main() {
	Solution s;
	vector<int> v2 = { 1,3,4,2 };
	int v = s.arrayPairSum(v2);
	cout << v << endl;
	return 0;
}

