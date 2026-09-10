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
    int sumo(TreeNode* root){
        if(root==nullptr) return 0;
        return root->val+sumo(root->left)+sumo(root->right);
    }
    int count(TreeNode* root){
        if(root==nullptr) return 0;
        return 1+count(root->left)+count(root->right);
    }
    int averageOfSubtree(TreeNode* root) {
        if(root==nullptr) return 0;
        int ans=0;
        if(root->val==sumo(root)/count(root)){
            ans++;
        }
        ans+=averageOfSubtree(root->left);
        ans+=averageOfSubtree(root->right);
        return ans;
    }
};