
class Solution {
public:
    void preorder(vector<int> &demo,TreeNode* root){
        if(root==NULL) return;
        else{
            demo.push_back(root->val);
            preorder(demo,root->left);
            preorder(demo,root->right);
        }
        
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        preorder(ans,root);
        return ans;
    }
};