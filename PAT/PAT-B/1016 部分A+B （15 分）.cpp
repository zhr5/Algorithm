#include<stdio.h>
int P(long long A,int Da);
int main()
{
	long long A,B;
	int Da,Db,Pa,Pb;
	while(scanf("%lld%d%lld%d",&A,&Da,&B,&Db)!=EOF)
	{
		Pa=P(A,Da);
		Pb=P(B,Db);
		printf("%d",Pa+Pb);
	}
	return 0;
}
int P(long long A,int Da)
{
	int P=0,count=0,k=1;
	while(A>0)
	{
		if(A%10==Da)
		count++;
		A/=10;
	}
	for(int i=1;i<=count;i++)
	{
	P+=Da*k;
	k*=10;
}
	return P;  
}