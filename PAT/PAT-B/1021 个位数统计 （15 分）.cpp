#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
  char str[1010];//1000位的正整数,只能用数组存
  cin.getline(str,1010);
  int len=strlen(str);
  
  int count[10]={0};
  for(int i=0;i<len;i++){
    count[str[i]-'0']++;//将str[i]对应的数字的count值加1
  }
  for(int i=0;i<10;i++){
    if(count[i]){
      printf("%d:%d\n",i,count[i]);
    }
  }
  return 0;
}