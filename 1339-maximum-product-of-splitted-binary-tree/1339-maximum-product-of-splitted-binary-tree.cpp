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
long  long best =0;
const int MOD = 1e9 + 7;

    long long getTotalSum(TreeNode* root){
        if(root==nullptr){
            return 0;
        }
        return getTotalSum(root->left) + getTotalSum(root->right) + root->val;
    };

    long long dsf(TreeNode*root,long long totalSum){
        if(root==nullptr){
            return 0;
        }
        long long left = dsf(root->left,totalSum);
        long long right = dsf(root->right,totalSum);

        long long current = left+right+ root->val;

        long long product = current * (totalSum - current);
        best = max(best,product);

        return current;
    }

    int maxProduct(TreeNode* root) {
       long long totalSum = getTotalSum(root);
        dsf(root,totalSum);

        return best % MOD;
    }
};