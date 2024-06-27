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
    int max = 0;
    public int maxDepth(TreeNode root) {
        if (root == null) {
            return 0;
        }
        int leftd = maxDepth(root.left);
        int rightd = maxDepth(root.right); 
        max = Math.max(max,leftd+rightd);
        return Math.max(leftd,rightd)+1;
    }
    public int diameterOfBinaryTree(TreeNode root) {
        maxDepth(root);
        return max;
    }
}