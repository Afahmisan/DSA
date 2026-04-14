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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        ListNode* newNode = new ListNode();
        int hold = 0;
        ListNode* current = newNode;
        while(l1 != nullptr || l2 != nullptr){
            int val1 = (l1 != nullptr) ? l1->val : 0;
            int val2 = (l2 != nullptr) ? l2->val : 0;

            int temp = val1 + val2 + hold;
            hold = temp /10;
            current -> next = new ListNode(temp % 10);
            current = current ->next;
            
            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
        }

        if(hold!= 0){
            current -> next = new ListNode(hold);
        }
        return newNode -> next;
    }
};