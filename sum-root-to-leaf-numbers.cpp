//https://leetcode.com/problems/sum-root-to-leaf-numbers/description/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void helper(TreeNode* root, int &tsum, int &temp){
        temp=temp*10+root->val;
        if(!root->left && !root->right) tsum+=temp;
        if(root->left) helper(root->left,tsum,temp);
        if(root->right) helper(root->right,tsum,temp);
        temp/=10;
    }
    
    int sumNumbers(TreeNode* root) {
        int tsum=0,temp=0;
        if(!root) return 0;
        helper(root,tsum,temp);
        return tsum;
    }
};
