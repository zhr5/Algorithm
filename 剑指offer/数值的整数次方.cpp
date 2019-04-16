#include<iostream>
using namespace std;
class Solution {
public:
	double Power(double base, int exponent) {
		double res = 1;
		if (exponent == 0)    return 1;
		if (exponent == 1)    return base;
		int p = abs(exponent);
		while (p>0) {
				if (p & 1) {
					res = res*base;
				}
				base = base*base;
				p >>= 1;
		}
	
		return exponent>0 ? res:1/res;
	}
};
int main() {
	Solution S;
	cout<<S.Power(3, 3);
	return 0;
}