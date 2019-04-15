/*	设计一个算法，计算出n阶乘中尾部零的个数
  	样例 
	11! = 39916800，因此应该返回 2
*/

#include<iostream>
using namespace std;
long long trailingZeros(long long n) {
        // write your code here, try to do it without arithmetic operators
         
        /*//保存n阶乘中尾部零的个数
        long count=0;
        //保存0~n中能整整除5的数的个数
        long count5=0;
      
        for(int i=5;i<=n;i=i+5){
              int j=i;
              while(j%5==0){
                count5++;
                j/=5;
             }
        }
      
        count=count5;
        return count;
    }  //O(NlogN)    */ 
  
     long count=0;
        while(n>0){
            count+=(n/5);
            //cout<<count<<endl;
            n/=5;
        }
        return count;
}//O(logN)
    
int main(){
	cout<<trailingZeros(105)<<endl;
	return 0;
	
} 

