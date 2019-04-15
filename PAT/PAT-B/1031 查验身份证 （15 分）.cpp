#include<iostream>
#include<string>
using namespace std;
char z_m[12]={'1','0','X','9','8','7','6','5','4','3','2'};
bool valid(string id){
  int res=0;
  int w[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
  for(int i=0;i<17;i++){
	  if(id[i]>'9'||id[i]<'0' )	return false;
    res+=(id[i]-'0')*w[i];
  }
  res=res%11;
  char r=z_m[res];
  if(id[17]==r) return true;
  else  return false;
}

int main(){
  int N; int count=0;
  string id;
  cin>>N;
  for(int i=0;i<N;i++){
    cin>>id;
	//cout<<valid(id)<<endl;
    if(!valid(id)){
	  count++;
	  cout<<id<<endl;//输出前17位有非数字或最后1位校验码不准确
    }
  }
  if(count==0)	cout<<"All passed";
  return 0;
}