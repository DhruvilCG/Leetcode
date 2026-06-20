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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* ans = nullptr;
        ListNode* prev = nullptr;
        ListNode* temp = head->next;
        int sum = 0, ctn = 0;
        while (temp != nullptr) {
            if (temp->val == 0 && ctn == 0) {
                ListNode* newNode = new ListNode(sum);
                ans = newNode;
                prev = newNode;
                sum = 0;
                ctn++;
                temp = temp->next;
            } else if (temp->val == 0) {
                ListNode* newNode = new ListNode(sum);
                prev->next = newNode;
                prev = newNode;
                sum = 0;
                ctn++;
                temp = temp->next;
            } else {
                sum += temp->val;
                temp = temp->next;
            }
        }

        return ans;
    }
};