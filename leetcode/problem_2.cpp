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
        int carry = 0;
        ListNode* temp = l1;
        while(temp != nullptr && l2!= nullptr){
            if(temp->val + l2->val + carry < 10){
                temp->val += l2->val +carry;
                carry =0;
            } else {
                temp->val = (temp->val + l2->val +carry) % 10;
                carry = 1;
            }
            temp = temp->next;
            l2 = l2->next;
        }
        
        while(temp!=nullptr){
            if(carry + temp->val < 10){
                temp->val += carry;
                carry = 0;
            } else {                
                temp->val = (temp->val +  carry)%10;
                carry = 1;
            }
            temp = temp->next;
        }
        
        while(l2 != nullptr){
            temp = l1;
            while(temp->next != nullptr){
                temp=temp->next;
            }
            if(carry + l2->val < 10){
                
                temp->next = new ListNode(l2->val + carry);
                carry = 0;
                temp->next->next = nullptr;
            } else {
                
                temp->next = new ListNode((l2->val + carry )%10);
                carry = 1;
                temp->next->next = nullptr;
            }
            l2 = l2->next;
            
        }
        
        if(carry == 1){
            temp = l1;
            while(temp->next != nullptr){
                temp = temp->next;
            }
            temp ->next = new ListNode(1);
            temp->next->next = nullptr;
        }
        return l1;
    }
};