//请实现一个函数，把字符串 s 中的每个空格替换成"%20"。 
//
// 
//
// 示例 1： 
//
// 输入：s = "We are happy."
//输出："We%20are%20happy." 
//
// 
//
// 限制： 
//
// 0 <= s 的长度 <= 10000 
// 👍 108 👎 0

package com.cute.leetcode.editor.cn;
public class TiHuanKongGeLcof {
    public static void main(String[] args) {
        Solution solution = new TiHuanKongGeLcof().new Solution();
    }
    //leetcode submit region begin(Prohibit modification and deletion)
class Solution {
        public String replaceSpace(String s) {
            StringBuilder string = new StringBuilder();
            for(int i=0;i<s.length();i++){
                char c=s.charAt(i);
                if(c==' '){
                    string.append("%20");
                }else{
                    string.append(c);
                }
            }
            return string.toString();
        }
    }
//leetcode submit region end(Prohibit modification and deletion)

}