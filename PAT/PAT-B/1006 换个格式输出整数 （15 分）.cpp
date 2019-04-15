#include<cstdio>
using namespace std;
int main(){
  int N;
  scanf("%d",&N);
  int n1,n2,n3;
  n1=N/100; n2=N%100/10; n3=N%100%10;
  if(n1){
    for(int i=0;i<n1;i++) printf("B");
  }
  if(n2){
    for(int i=0;i<n2;i++) printf("S");
  }
  if(n3){
    for(int i=1;i<=n3;i++) printf("%d",i);
  }
  //printf("%d%d%d",n1,n2,n3);
  return 0;
}