#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
	void reOrderArray(vector<int> &array) {
		vector<int> r;
		for (int i = 0; i < array.size(); i++) {
			r.push_back(array[i]);
		}
		array.clear();
		for (int i = 0; i<r.size(); i++) {
			if (r[i] % 2 != 0) {
				array.push_back(r[i]);
			}
		}
		for (int i = 0; i<r.size(); i++) {
			if (r[i] % 2 == 0) {
				array.push_back(r[i]);
			}
		}
	}
};
int main() {
	vector <int> a{ 1,2,3,4,5 };
	Solution s;
	s.reOrderArray(a);
	for (vector<int> ::iterator it = a.begin(); it != a.end(); it++) {
		cout << *it;
	}
	return 0;
}
/*链接：https://www.nowcoder.com/questionTerminal/beb5aa231adc45b2a5dcc5b62c93f593
来源：牛客网

用的STL　stable_partition 这个函数 
  函数功能是将数组中　isOk为真的放在数组前，假的放在数组后，和题意相符 

  1bool isOk(int n){  return ((n & 1) == 1);　//奇数返回真 }
  12345class Solution{    void reOrderArray(vector<int> &array){        stable_partition(array.begin(),array.end(),isOk);    }};*/
