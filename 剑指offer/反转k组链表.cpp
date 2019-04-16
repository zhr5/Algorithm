#include<iostream>
#include<string>
#include<vector>
using namespace std;
// [123,456,789]字符串解析到数组里 
vector<int> changeStrtoNumber(string str) {
	int len = str.size();
	int res = 0;
	vector<int> v;
	for (int i = 0; i < len; i++) {
		while (str[i] != ','&&i < len&&str[i]>='0'&&str[i]<='9') {
			res = res * 10 + str[i] - '0';
			i++;
		}
		v.push_back(res);
	}
	return v;
}
int main() {
	string str;
	cin >> str;
	int n;
	cin >> n;
	vector<int> v;
	v = changeStrtoNumber(str);
	int c= 0;
	int round = v.size() / n;
	cout << "[";
	int count;
	for (int i = 0; i < round; i++) {
		count = 0;
		for (int j = (i + 1)*n - 1; count < n; count++, j--) {
			cout << v[j]  ;
			c++;
			if (c<=v.size() - 1) cout << ",";
		}
	}
	
	int t = round*n;
	for (int i = t; i<v.size(); i++) {
		cout << v[i];
		c++;
		if (c<=v.size() - 1) cout << ",";
	}
	cout << "]";
	return 0;
}
