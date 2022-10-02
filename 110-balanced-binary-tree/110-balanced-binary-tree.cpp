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
    int height(TreeNode *root)
    {
        if(root==NULL)
            return 0;
       else
           return max(height(root->left),height(root->right))+1;
        
        
    } 
    
    void inorder(TreeNode *root,bool &ans)
      {if(root!=NULL)
      {inorder(root->left,ans);
          int hl=height(root->left);
          int hr=height(root->right);
          int diff=abs(hl-hr);
          if(diff>1)
              ans=ans && false;
          inorder(root->right,ans);
          }  }            
                      
                      
                     
    bool isBalanced(TreeNode* root) {
        bool ans=true;
        inorder(root,ans);
        return ans;
    }
};