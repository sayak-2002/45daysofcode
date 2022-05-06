// Problem Name - Diameter of Binary Tree
// Problem Link - https://leetcode.com/problems/diameter-of-binary-tree/


class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;
        
        int lh = height(root->left);
        int rh = height(root->right);
        
        int ld = diameterOfBinaryTree(root->left);
        int rd = diameterOfBinaryTree(root->right);
        
        return max(lh+rh, max(ld, rd));
        
    }
private:
    int height(TreeNode* node){
        if(node == NULL) return 0;
        
        return max(height(node->left), height(node->right))+1;
    }
};