/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void inorder(vector<int>&a, TreeNode* root) {
        if (root == NULL)
            return;
        inorder(a, root->left);
        a.push_back(root->val);
        inorder(a, root->right);
    }

    bool isValidBST(TreeNode* root) {
        vector<int> a;
        inorder(a, root);
        for(int i=0;i<a.size()-1;i++) {
            if(a[i] < a[i+1]) continue;
            else return false;
        }
        return true;
    }
};