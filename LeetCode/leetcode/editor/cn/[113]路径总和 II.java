//给定一个二叉树和一个目标和，找到所有从根节点到叶子节点路径总和等于给定目标和的路径。 
//
// 说明: 叶子节点是指没有子节点的节点。 
//
// 示例: 
//给定如下二叉树，以及目标和 sum = 22， 
//
//               5
//             / \
//            4   8
//           /   / \
//          11  13  4
//         /  \    / \
//        7    2  5   1
// 
//
// 返回: 
//
// [
//   [5,4,11,2],
//   [5,8,4,5]
//]
// 
// Related Topics 树 深度优先搜索 
// 👍 434 👎 0

package com.cute.leetcode.editor.cn;

import java.util.List;

public class PathSumIi {
    public static void main(String[] args) {
        Solution solution = new PathSumIi().new Solution();
    }
    //leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    List<List<Integer>> ret = new LinkedList<List<Integer>>();
    Deque<Integer> path = new LinkedList<Integer>();

    public List<List<Integer>> pathSum(TreeNode root, int sum) {
        dfs(root, sum);
        return ret;
    }

    public void dfs(TreeNode root, int sum) {
        if (root == null) {
            return;
        }
        path.offerLast(root.val);//末尾插入
        sum -= root.val;
        if (root.left == null && root.right == null && sum == 0) {
            ret.add(new LinkedList<Integer>(path));
        }
        dfs(root.left, sum);
        dfs(root.right, sum);
        path.pollLast();//删除列表最后一个元素，恢复现场
    }

}
//leetcode submit region end(Prohibit modification and deletion)

}

/**
 * class Solution {
 *     public List<List<Integer>> pathSum(TreeNode root, int sum) {
 *         List<List<Integer>> ans = new ArrayList<>();
 *         DFS(ans,new ArrayList<>(),root,sum,sum);
 *         return ans;
 *     }
 *
 *       public void DFS(List<List<Integer>> ans,List<Integer> tmpList,TreeNode node,int sum,int remain)
 *     {
 *         //递归结束条件
 *         if(node==null)
 *             return;
 *         //业务逻辑处理
 *         tmpList.add(node.val);
 *         remain=remain-node.val;
 *         if(remain==0&&node.left==null&&node.right==null){
 *             ans.add(tmpList);
 *             return;
 *         }
 *         DFS(ans,new ArrayList<>(tmpList),node.left,sum,remain);
 *         DFS(ans,new ArrayList<>(tmpList),node.right,sum,remain);
 *     }
 * }
 */
