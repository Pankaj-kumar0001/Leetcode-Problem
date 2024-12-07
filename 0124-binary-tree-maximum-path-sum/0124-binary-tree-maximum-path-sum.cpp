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
    int depth(TreeNode* root,int &maxi){
        if(root==NULL) return 0;
        int lefty=max(0,depth(root->left,maxi));
        int righty=max(0,depth(root->right,maxi));
        maxi=max(maxi,lefty+righty+root->val);
        
        return max(lefty,righty)+root->val;
        
        
}
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        depth(root,maxi);
        return maxi;
    }
};