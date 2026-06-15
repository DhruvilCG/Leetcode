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
    ListNode* deleteMiddle(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return nullptr;
        }
        int cnt = 0;
        ListNode* temp = head;
        while(temp != nullptr) {
            cnt++;
            temp = temp->next;
        }
        temp = head;
        for (int i = 1 ; i < cnt/2 ; i++) {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};