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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        ListNode* temp = head;
        for (int i = 1; i <= n; i++) {
            temp = temp->next;
        }

        if (temp == NULL) {
            ListNode* result = head->next;
            delete (head);
            return result;
        }

        ListNode* pre = head;
        while (temp != NULL && temp->next != NULL) {
            pre = pre->next;
            temp = temp->next;
        }

        ListNode* delNode = pre->next;
        pre->next = pre->next->next;

        delete (delNode);

        return head;
    }
};