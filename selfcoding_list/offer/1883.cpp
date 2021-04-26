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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if (!preorder.size()) {
            return nullptr;
        }
        stack<TreeNode*> stk;
        TreeNode * root = new TreeNode(preorder[0]);
        stk.push(root);
        int inorderIndex=0;
        for(int i=1;i<preorder.size();i++){
            int preorderValue = preorder[i];
            TreeNode *node = stk.top();
            if(node->val != inorder[inorderIndex]){
                node->left=new TreeNode(preorderValue);
                stk.push(node->left);
            }
            else{
                while(!stk.empty() && stk.top()->val==inorder[inorderIndex]){
                    node=stk.top();
                    stk.pop();
                    inorderIndex++;
                }
                node->right=new TreeNode(preorderValue);
                stk.push(node->right);
            }
        }
        return root;
    }
};