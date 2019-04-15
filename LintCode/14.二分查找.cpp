class Solution {
public:
    /**
     * @param nums: The integer array.
     * @param target: Target number to find.
     * @return: The first position of target. Position starts from 0. 
     */
    int binarySearch(vector<int> &array, int target) {
        // write your code here
    int low = 0, high = array.size() - 1;
    while (low <= high)
	{
		int mid = (low + high) / 2;
		if (array[mid]>target)
			high = mid - 1;
		else if (array[mid]<target)
			low = mid + 1;
		else{
		    int i=mid;
		    while(i>0){
		    if(array[i-1]==target){
		        i--;
		    }
		    else
		        break;
		    }
			return i;
		}
	}
	return -1;
    }
};