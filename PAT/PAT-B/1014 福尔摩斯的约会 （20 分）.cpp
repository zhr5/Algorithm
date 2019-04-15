#include<iostream>
#include<string>
using namespace std;
int main(){
  string week[7] = {"MON ", "TUE ", "WED ", "THU ", "FRI ", "SAT ", "SUN "};
  string s1,s2,s3,s4;
  cin>>s1>>s2>>s3>>s4;
  int i=0;
  int len1=s1.size();
  int len2=s2.size();
  int len3=s3.size();
  int len4=s4.size();
  for(i;i<len1&&i<len2;i++){
    if(s1[i]==s2[i]&&s1[i]>='A'&&s1[i]<='G'){
      cout<<week[s1[i]-'A'];//输出对应星期几
      break;
    }
  }
 
  for(i++;i<len1&&i<len2;i++){
    if(s1[i]==s2[i]){
        if(s1[i]>='0'&&s1[i]<='9')  {cout<<"0"<<s1[i];    break;}
        else if(s1[i]>='A'&&s1[i]<='N') {cout<<s1[i]-'A'+10; break;}
    }
  }
  cout<<":";
  int j=0;
  for(j;j<len3&&j<len4;j++){
    if((s3[j]==s4[j]&&s3[j]>='a'&&s3[j]<='z')||(s3[j]==s4[j]&&s3[j]>='A'&&s3[j]<='Z'))  break;
  }
  if(j<10)  cout<<"0"<<j;
  else  cout<<j;
  return 0;
}