#include<cstdio>
#include<stack>
using namespace std;
int main(){
  int a,b;int d;//2^32-1 范围内用 int就可以
  stack<int> s;//进制转换用
  scanf("%d%d%d",&a,&b,&d);
  int  c=a+b;
  
  if (!c) printf("0");
  while(c){
    s.push(c%d);
    c=c/d;
  }
  
  while(!s.empty()){
    int e=s.top();
	s.pop();
    printf("%d",e);
  }
  return 0;
}