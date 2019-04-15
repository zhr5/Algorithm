#include<cstdio>
using namespace std;
int main(){
	int N,i;	char c;
	scanf("%d %c",&N,&c);
	for( i=1;i<=1000;i++){
		if(2*i*i-1<=N&&2*(i+1)*(i+1)>N){
			break ;
		}
	}//得到的i是指一个三角的层数
	int n=2*i-1;//最上层输出符号数
	for(int k=i;k>0;k--){
		for(int j=i-k;j>0;j--){printf(" ");}
		for(int m=2*k-1;m>0;m--){printf("%c",c);}
		printf("\n");
	}//输出上三角
	for(int k=2;k<=i;k++){
		for(int j=i-k;j>0;j--)	{printf(" ");}
		for(int m=2*k-1;m>0;m--)	{printf("%c",c);}
		printf("\n");
	}//输出下三角
	printf("%d",(N-(2*i*i-1)));
	return 0;
}