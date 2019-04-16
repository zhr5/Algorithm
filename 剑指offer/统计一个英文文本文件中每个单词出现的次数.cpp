// 统计一个英文文本文件中每个单词出现的次数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
/*
#include "pch.h"
#include<iostream>
#include<fstream>
#include<unordered_map>
#include<algorithm>
#include<string>
using namespace std;

bool mysort(pair < int, string > a, pair < int, string > b) {
	if (a.first != b.first)
		return a.first > b.first;
	else
		return a.second < b.second;
}

int main() {
	//统计出现过的所有单词：
	ifstream ifs("input.in", ifstream::in);
	unordered_map < string, int > um;
	string s;
	while (ifs >> s) {
		if (um.find(s) == um.end()) um[s] = 1;
		else ++um[s];
	}
	ifs.close();
	//排序（以出现次数大到小为最优先排位方式，如果出现次数一致，则以辞典编纂从小到大的顺序排位：
	vector < pair < int, string > > v;
	for (unordered_map<string, int>::iterator it = um.begin(); it != um.end(); ++it)
		v.push_back(make_pair(it->second, it->first));
	sort(v.begin(), v.end(), mysort);

	//输出：
	for (int i = 0; i < v.size(); ++i)
		puts(v[i].second.c_str());
}
*/

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件


#include<iostream>
#include<fstream>
#include<string>
#include<map>
using namespace std;

int main(int argc, char *argv[])
{
	ifstream in("in.txt");
	ofstream out("out.txt");
	string c;
	map<string, int> stringNum;
	while (in >> c) { 
		stringNum[c]++; 
	}
	for (map<string, int>::iterator it = stringNum.begin(); it != stringNum.end(); it++)
	{
		out << it->first << " : " << it->second << endl;
	}
	in.close();
	return 0;
}
