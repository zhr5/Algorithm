#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

struct student{
  char id[11];int Dscore,Cscore,sum; //Dscore为德分,Cscore为才分
  int flag;                 //考生类别:共五类假定类别小的排前面
}stu[10010];				

bool cmp(const student &a,const student &b){
	if(a.flag!=b.flag)	return a.flag<b.flag;//不同类别,类别小的排在前面
	else if(a.sum!=b.sum)	return a.sum>b.sum;//类别相同时,总分大的在前
	else if(a.Dscore!=b.Dscore)	return a.Dscore>b.Dscore;//总分相同时,德分大排在前面
	else return strcmp(a.id,b.id)<0;		//德分也并列，则按准考证号小的排前面
	
}
int main(){
  int N,L,H,M;
  scanf("%d%d%d",&N,&L,&H);
  //cin>>N>>L>>H;
  M=N;
  for(int i=0;i<N;i++){
		scanf("%s%d%d",stu[i].id,&stu[i].Dscore,&stu[i].Cscore);
		//cin>>stu[i].Dscore>>stu[i].Cscore;
	  stu[i].sum=stu[i].Dscore+stu[i].Cscore;
    if(stu[i].Dscore<L||stu[i].Cscore<L){
	  stu[i].flag=5;
      M--;      
	}
	else if(stu[i].Dscore>=H&&stu[i].Cscore>=H)	stu[i].flag=1;
	else if(stu[i].Dscore>=H&&stu[i].Cscore<H)	stu[i].flag=2;
	else if(stu[i].Dscore>stu[i].Cscore)	stu[i].flag=3;
	else stu[i].flag=4;
  }
  sort(stu,stu+N,cmp);
  printf("%d\n",M);
  for(int i=0;i<M;i++){
	  printf("%s %d %d\n",stu[i].id,stu[i].Dscore,stu[i].Cscore);
  }
  return 0;
}