//输入某二叉树的前序遍历和中序遍历的结果，请重建该二叉树。假设输入的前序遍历和中序遍历的结果中都不含重复的数字。 
//
// 
//
// 例如，给出 
//
// 前序遍历 preorder = [3,9,20,15,7]
//中序遍历 inorder = [9,3,15,20,7] 
//
// 返回如下的二叉树： 
//
//     3
//   / \
//  9  20
//    /  \
//   15   7 
//
// 
//
// 限制： 
//
// 0 <= 节点个数 <= 5000 
//
// 
//
// 注意：本题与主站 105 题重复：https://leetcode-cn.com/problems/construct-binary-tree-from-
//preorder-and-inorder-traversal/ 
// Related Topics 树 递归 
// 👍 452 👎 0

package com.cute.leetcode.editor.cn;

import java.util.HashMap;

public class ZhongJianErChaShuLcof {
    public static void main(String[] args) {
        Solution solution = new ZhongJianErChaShuLcof().new Solution();
    }
    //leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
class Solution {
    int[] preorder;
    HashMap<Integer,Integer> indexMap=new HashMap<>();
    public TreeNode buildTree(int[] preorder, int[] inorder) {
        this.preorder=preorder;
        for(int i=0;i<inorder.length;i++){
            indexMap.put(inorder[i],i);
        }
        return  reBuildTree(0,0,inorder.length-1);
    }

    public TreeNode reBuildTree(int root,int left,int right){
        /*
        *root是root节点在preorder的位置，left、right是待处理的子树在inorder中起始位置
        * */
        if(left>right)  return null;
        TreeNode node=new TreeNode(preorder[root]);
        int i=indexMap.get(preorder[root]);
        node.left=reBuildTree(root+1,left,i-1);//左子树
        // 左子树len=i-left,所以右子树root位置在root+len+1
        node.right=reBuildTree(root+1+i-left,i+1,right);
        return node;
    }
}
//leetcode submit region end(Prohibit modification and deletion)

}