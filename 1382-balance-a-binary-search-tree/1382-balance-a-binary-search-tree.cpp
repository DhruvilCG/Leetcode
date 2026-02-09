/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right)
 *         : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> sortedValues;
        extractInorder(root, sortedValues);

        return buildBalancedTree(sortedValues, 0, sortedValues.size() - 1);
    }

private:
    void extractInorder(TreeNode* node, vector<int>& sortedValues) {
        if (!node)
            return;

        extractInorder(node->left, sortedValues);
        sortedValues.push_back(node->val);
        extractInorder(node->right, sortedValues);
    }

    TreeNode* buildBalancedTree(const vector<int>& values, int start, int end) {
        if (start > end)
            return nullptr;

        int mid = start + (end - start) / 2;
        TreeNode* newNode = new TreeNode(values[mid]);

        newNode->left = buildBalancedTree(values, start, mid - 1);
        newNode->right = buildBalancedTree(values, mid + 1, end);

        return newNode;
    }
};