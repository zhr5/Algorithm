#include<iostream>
using namespace std;
int main() {
	int N, e = 0;
	char A1, B2;
	int C1 = 0, C2 = 0;
	int count1[3] = { 0 }, count2[3]= { 0 };//按B C J 顺序分别存储出该手势获胜次数
	cin >> N;
	while (N--) {
		cin >> A1 >> B2;
		if (A1 == B2) e++;
		else if (A1 == 'C'&&B2 == 'J') { C1++; count1[1]++; }
		else if (A1 == 'C'&& B2 == 'B') { C2++; count2[0]++; }
		else if (A1 == 'J'&&B2 == 'C') { C2++; count2[1]++; }
		else if (A1 == 'J'&&B2 == 'B') { C1++; count1[2]++; }
		else if (A1 == 'B'&& B2 == 'C') { C1++; count1[0]++; }
		else if (A1 == 'B'&&B2 == 'J') { C2++; count2[2]++; }
	}

	char mp[3] = { 'B','C','J' };
int id1 = 0, id2 = 0;		//一开始想的是取出所有最大值来比较字典序
	for (int i = 0; i<3; i++) {//最后取字典小的最大值,所以按照BCJ顺序排列取第一个最大值就可以
		if (count1[i]>count1[id1]) id1 = i;
		if (count2[i]>count2[id2]) id2 = i;
	}



	printf("%d %d %d\n", C1, e, C2);
	printf("%d %d %d\n", C2, e, C1);

	printf("%c %c\n", mp[id1], mp[id2]);
	return 0;
}