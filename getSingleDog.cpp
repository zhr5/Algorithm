/*一个数组中只有一个数字出现一次,其余都出现偶数次,求出这个数*/ 
#include<iostream>
using namespace std;
int getSingleDog(int *a,int n){
	int res=0;
	for(int i=0;i<n;i++){
		res^=a[i];
	}
	return res;
}
int main(){
	int a[5]={1,1,2,2,3};
	cout<<getSingleDog(a,5);
	return 0;
} 
