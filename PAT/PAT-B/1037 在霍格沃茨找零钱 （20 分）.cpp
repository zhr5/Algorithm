#include<cstdio>
using namespace std;
int main(){
  int P_G,P_S,P_K,A_G,A_S,A_K;
  scanf("%d.%d.%d",&P_G,&P_S,&P_K);
  scanf("%d.%d.%d",&A_G,&A_S,&A_K);
  int P=P_G*17*29+P_S*29+P_K;
  int A=A_G*17*29+A_S*29+A_K;
  int R=A-P;
  if(R>0){
    printf("%d.%d.%d",R/(17*29),R%(17*29)/29,R%(17*29)%29);
  }else if(R<0){
	  R=-R;
	  printf("-");
    printf("%d.%d.%d",R/(17*29),R%(17*29)/29,R%(17*29)%29);
  }else{
	  printf("0.0.0");
  }
  
}