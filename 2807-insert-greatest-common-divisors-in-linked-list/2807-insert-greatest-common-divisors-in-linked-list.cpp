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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (head->next == nullptr) {
            return head;
        }

        ListNode* temp = head;

        while (temp->next != nullptr) {
            int st = min(temp->val, temp->next->val), end = max(temp->val, temp->next->val);
            int divisor;
            for (int i = 1; i <= st; i++) {
                if (st % i == 0 && end % i == 0) {
                    divisor = i;
                }
            }

            ListNode* newNode = new ListNode(divisor);
            newNode->next = temp->next;
            temp->next = newNode;
            temp = temp->next->next;
        }

        return head;
    }
};