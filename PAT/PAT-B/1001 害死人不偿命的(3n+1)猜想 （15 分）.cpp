#include<iostream>
using namespace std;
int main()
{
	int n=0,count=0;
	while(cin>>n)
	{
		while(n!=1)
		{
			if(n%2==0)
			{
			n=n/2;
			count++;
	    	} 
	    	else
	    	{ 
	    	n=(3*n+1)/2;
	    	count++;
	    	} 
		}
		cout<<count<<endl;
	}
	return 0;
 } 