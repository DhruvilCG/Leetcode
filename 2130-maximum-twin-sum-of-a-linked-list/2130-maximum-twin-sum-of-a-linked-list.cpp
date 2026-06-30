/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        int maxSum = 0;
        ListNode* temp = head;
        vector<int> vec;
        while (temp != nullptr) {
            vec.push_back(temp->val);
            temp = temp->next;
        }

        for (int i = 0; i < vec.size() / 2; i++) {
            maxSum = max(maxSum, vec[i] + vec[vec.size() - 1 - i]);
        }
        return maxSum;
    }
};