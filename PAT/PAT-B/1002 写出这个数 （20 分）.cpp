#include<iostream>
#include<cstdio>
#include<cstring>
#include<stack>
using namespace std;
int main(){
  char str[110];
  fgets(str,110,stdin);
  int len=strlen(str);
  int res=0,count=0;
  for(int i=0;i<len-1;i++){//strlength>读入字符串长度所以当读到字符串末尾的换行符时，fgets(…)会返回,并在末尾添加\0,所以len-1除掉\0干扰
    res+=(str[i]-'0');
  }
  if(res==0)	{cout<<"ling" <<endl;	return 0;}
  stack<int> s;
  while(res){
    s.push(res%10);
    res=res/10;
    count++;
  }
  while(!s.empty()){
    int e=s.top();
    switch (e)
			{
			case 0:cout << "ling" ; break;
			case 1:cout << "yi" ; break;
			case 2:cout << "er" ; break;
			case 3:cout << "san"; break;
			case 4:cout << "si"; break;
			case 5:cout << "wu"; break;
			case 6:cout << "liu"; break;
			case 7:cout << "qi" ; break;
			case 8:cout << "ba" ; break;
			case 9:cout << "jiu" ; break;
			}
			s.pop();
			count--;
			if(count!=0)  cout<<" ";
			else  cout<<endl;
  }
  return 0;
  
}