#include<cstdio>
#include<cmath>
using namespace std;
int main() {
	int N; char c;
	scanf("%d %c", &N, &c);
	for (int i = 0; i < N; i++)  printf("%c", c);
	printf("\n");
	double n = N * 10;  int m = ceil(n / 20);
	//printf("%d", m);
	for (int k = 0; k < m - 2; k++) {
		printf("%c", c);
		for (int j = 0; j < N - 2; j++)  printf(" ");
		printf("%c\n", c);	
	}
	for (int i = 0; i < N; i++) printf("%c", c);
	return 0;
}