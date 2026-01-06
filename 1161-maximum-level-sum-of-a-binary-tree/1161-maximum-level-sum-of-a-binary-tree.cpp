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
    int maxLevelSum(TreeNode* root) {
        int maxSum = root->val;
        int tempSum = 0;
        int level = 1;
        int answerLevel = 1;
        queue<TreeNode*> q;

        q.push(root);
        q.push(nullptr);

        while (q.size() != 0) {
            TreeNode* front = q.front();
            q.pop();

            if (front == nullptr) {
                if (tempSum > maxSum) {
                    maxSum = tempSum;
                    answerLevel = level;
                }

                tempSum = 0;
                level++;

                if (!q.empty()) {
                    q.push(nullptr);
                }
            } else {
                tempSum = tempSum + front->val;
                if (front->left != nullptr) {
                    q.push(front->left);
                }
                if (front->right != nullptr) {
                    q.push(front->right);
                }
            }
        }

        return answerLevel;
    }
};