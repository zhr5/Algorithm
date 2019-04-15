#include<iostream>
using namespace std;

class Solution {
public:
    /*
     * @param : An integer
     * @param : An integer
     * @return: An integer denote the count of digit k in 1..n
     */
    int digitCounts(int k, int n) {
        // write your code here
       /* int count=0;(该解法只通过了23%的数据,如k=2,n=302无法通过) 
        for(int i=0;i<=n;i++){
        	int j=i;
        	if(k==0){
        		count=1;
			}
        	if(j>0){
        		if(j%10==k){
        			count++;
				}
				if(j/10==k){
					count++;
				}
				j=j/10;
			}
		}
		return count;*/
		int sum=0;
        for(int i=0;i<=n;i++){
            int num=i;
            while(num/10>0){
                if(num%10==k){
                    sum++;
                }
                num=num/10;
            }
            if(num==k)
            sum++;
        }
        
        return sum;
		
    }//O(NlogN)
};

int main(){
	int k=2,n=302;
	Solution solution;
	cout<<solution.digitCounts(k,n)<<endl;
	return 0;
} 
