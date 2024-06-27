/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root) return ans;
        queue<TreeNode*>q;
        q.push(root);
        int flag = 0;
        while(!q.empty()){
            int size = q.size();
            vector<int>l;
            for(int i=0; i<size; i++){
                TreeNode* cur = q.front();
                q.pop();
                l.push_back(cur->val);
                if(cur->left){
                    q.push(cur->left);
                }
                if(cur->right){
                    q.push(cur->right);
                }
            }
            if(flag==0){
                ans.push_back(l);
                flag=1;
            }else{
                reverse(l.begin(), l.end());
                ans.push_back(l);
                flag=0;
            }
            l.clear();
        }
        return ans;
    }
};