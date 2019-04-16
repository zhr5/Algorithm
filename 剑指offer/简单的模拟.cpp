// 简单的模拟.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include<iostream>
#include<vector>
using namespace std;

int main() {
	int T;
	cin >> T;
	int temp;
	int count = 0;
	vector<int> v;
	while (T--) {
		cin >> temp;
		for (int i = 1; i <= temp; i++) {
			v.push_back(i);
		}
		while (count < temp) {
			for (int i = 0; i < v.size(); i += 2) {
				cout << v[i] << " ";
				count++;
				if (i + 1 < v.size()) {
					v.push_back(v[i + 1]);
				}
			}
		}
		cout << endl;
		v.clear();
	}
}

