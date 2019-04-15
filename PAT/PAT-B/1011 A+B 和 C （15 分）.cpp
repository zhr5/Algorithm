#include<stdio.h>
int main()
{
	long long A,B,C,T,t=1;
	scanf("%d",&T);
	while(T--)
	{
	    scanf("%lld%lld%lld",&A,&B,&C);
		if(A+B>C)
		printf("Case #%d: true\n",t++);
		else
		printf("Case #%d: false\n",t++);
 }
 return 0;
 } 