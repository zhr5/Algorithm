#include<iostream>
using namespace std;
int main() {
	int S[51];
	int temp;
	int i = 0;
	while (scanf("%d", &temp) != EOF) {
		S[i++] = temp;
		printf("%d", temp);
	}
	
	int d;
	scanf("%d", &d);
	int count = 0;
	int sum = (i*(i - 1)) / 2;
	for (int k = 0; k<i - 1; k++) {
		for (int j = k + 1; j<i; j++) {
			if (abs(S[k] - S[j] <= d)) {
				count++;
			}
		}
	}
	double r = count / sum;
	printf("%.6d", r);
	return 0;
}