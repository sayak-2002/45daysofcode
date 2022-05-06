//Problem Name - Binary Tree Inorder Traversal
//Problem Link - https://leetcode.com/problems/binary-tree-inorder-traversal/



//Using Recursion

class Solution {
public:
    void inorder(TreeNode *root,vector<int> &ans)
    {
        if(!root) return;                            
        inorder(root->left,ans);                     
        ans.push_back(root->val);                    
        inorder(root->right,ans);                    
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        inorder(root,v);
        
        return v;
    }
};

// Using Stack

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root == NULL) return ans;
        stack<TreeNode*> s;
        TreeNode* node = root;
        
        while(true){
            if(node!=NULL){
                s.push(node);
                node = node->left;
            }else{
                if(s.empty() == true) break;
                node = s.top();
                s.pop();
                ans.push_back(node->val);
                node = node->right;
            }
        }
        
        
        return ans;
    }
};