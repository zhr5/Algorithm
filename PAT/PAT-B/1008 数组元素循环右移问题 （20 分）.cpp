#include <iostream>
using namespace std;
int main()
{
	int A[110];
	int N,M,count=0;
	cin>>N>>M;
	M=M%N;
	for(int i=0;i<N;i++)
	{
		cin>>A[i];
	}
	getchar();
	for(int i=N-M;i<N;i++)
	{
		cout<<A[i]<<" ";
		count++;
	}
	for(int i=0;i<N-M;i++)
	{
		cout<<A[i];
		count++;
		if(count<N)
		cout<<" ";
	}
	return 0;
 } 