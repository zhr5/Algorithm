#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
struct student{
   string name;
   string id;
   int score;
}student[101];
int main(){
  int N;
  cin>>N;
  for(int i=0;i<N;i++){
    cin>>student[i].name>>student[i].id>>student[i].score;
  }
  int maxscore=student[0].score;
  int max_id=0;
  int minscore=student[0].score;
  int min_id=0;
  for(int j=0;j<N;j++){
    if(student[j].score>maxscore){
    maxscore=student[j].score;
    max_id=j;
    }
    if(student[j].score<minscore){
      minscore=student[j].score;
      min_id=j;
    }
  }
  cout<<student[max_id].name<<" "<<student[max_id].id<<endl;
  cout<<student[min_id].name<<" "<<student[min_id].id<<endl;
  return 0;
}