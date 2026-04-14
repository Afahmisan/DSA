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
        ListNode* newNode = new ListNode();
        int hold = 0;
        ListNode* current = newNode;
        while(l1 != nullptr || l2 != nullptr){
            int valueTemp = 0;
            if(l1 == nullptr){
                valueTemp = l2->val + hold;
                current ->next = new ListNode(valueTemp % 10);
                current = current->next;
                l2 = l2 -> next;
                hold = valueTemp / 10;
            } else if (l2 == nullptr){
                valueTemp = l1->val + hold;
                current ->next = new ListNode(valueTemp % 10);
                current = current->next;
                l1 = l1 -> next;
                hold = valueTemp / 10;
            } else {
                valueTemp = l1-> val + l2-> val + hold;
                current ->next = new ListNode(valueTemp % 10);
                current = current->next;
                l1 = l1 -> next;
                l2 = l2 -> next;
                hold = valueTemp / 10;
            }
            if(hold != 0){
                current ->next = new ListNode(hold);
            }
            
        }

        return newNode -> next;
    }
};