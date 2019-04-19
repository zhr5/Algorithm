class Solution {
public:

    string longestPalindrome(string s) {
        if (s.length() < 1)    return "";
    	int len1, len2, len,maxlen=0;
    	int start = 0, end = 0;
    	for (int i = 0; i < s.length(); i++) {
    		len1 = expandAroundCenter(s, i, i);
    		len2 = expandAroundCenter(s, i, i + 1);
    		len = max(len1, len2);
    		if (len > maxlen) maxlen = len;
    		if (len > end - start) {
    			start = i - (len - 1) / 2;
    			end = i + len / 2;
    			//cout << i << " " << start << " " << end << " " << len << endl;
    		}
    	}
    	//cout  << start << " " << end << " " << len << endl;
    	return s.substr(start, maxlen);//参考的solution  结果Java的substring是[start,end),C++的string是(start,length)因为随着遍历len可能还会变小,所以留存最大的len
    }
`private:`
    `int expandAroundCenter(string s,int left,int right){`
        `int L=left,R=right;`
        `while(L>=0&&R<s.length()&&s[L]==s[R]){`
            `L--;`
            `R++;`
        `}`
        `return R-L-1;`
    `}`
`};`