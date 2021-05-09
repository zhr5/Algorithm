//给定一个字符串，请你找出其中不含有重复字符的 最长子串 的长度。 
//
// 
//
// 示例 1: 
//
// 
//输入: s = "abcabcbb"
//输出: 3 
//解释: 因为无重复字符的最长子串是 "abc"，所以其长度为 3。
// 
//
// 示例 2: 
//
// 
//输入: s = "bbbbb"
//输出: 1
//解释: 因为无重复字符的最长子串是 "b"，所以其长度为 1。
// 
//
// 示例 3: 
//
// 
//输入: s = "pwwkew"
//输出: 3
//解释: 因为无重复字符的最长子串是 "wke"，所以其长度为 3。
//     请注意，你的答案必须是 子串 的长度，"pwke" 是一个子序列，不是子串。
// 
//
// 示例 4: 
//
// 
//输入: s = ""
//输出: 0
// 
//
// 
//
// 提示： 
//
// 
// 0 <= s.length <= 5 * 104 
// s 由英文字母、数字、符号和空格组成 
// 
// Related Topics 哈希表 双指针 字符串 Sliding Window 
// 👍 4988 👎 0

package com.cute.leetcode.editor.cn;

import java.util.HashSet;

public class LongestSubstringWithoutRepeatingCharacters {
    public static void main(String[] args) {
        Solution solution = new LongestSubstringWithoutRepeatingCharacters().new Solution();
    }
    //leetcode submit region begin(Prohibit modification and deletion)
class Solution {
    public int lengthOfLongestSubstring(String s) {
        Set<Character> set=new HashSet<>();//存储从l到r的子串字符
        int l=0,r=0,res=0;
        while(l<s.length()){
            if(res>s.length()-l-1)//当剩余长度已经小于目前的最长子串长度
                break;//提前结束

            while(r<s.length()&&!set.contains(s.charAt(r))){//不重复的字符依次添加到set中存储
                set.add(s.charAt(r));
                r++;
            }
            res=Math.max(res,r-l);//先计算最大值，再移动左指针删除重复字符
            while(r<s.length()&&set.contains(s.charAt(r))){//左指针可以一直右移到内层循环退出时导致重复的那个字符后一位
                set.remove(s.charAt(l));//
                l++;
            }

        }

        return res;
    }
}
//leetcode submit region end(Prohibit modification and deletion)

}