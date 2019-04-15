#include<cstdio>
int main()
{
	int N;
	scanf("%d",&N);
	int Jsay,Jdo,Ysay,Ydo,Jdrink=0,Ydrink=0;
	while(N--)
	{
		scanf("%d%d%d%d",&Jsay,&Jdo,&Ysay,&Ydo);
		if(Jdo==Jsay+Ysay&&Ydo!=Jsay+Ysay)
		Ydrink++;
		else if(Ydo==Jsay+Ysay&&Jdo!=Jsay+Ysay)
		Jdrink++;
	}
	printf("%d %d",Jdrink,Ydrink);
	return 0;
}