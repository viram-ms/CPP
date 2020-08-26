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
    
    ListNode* dfs(ListNode* head, int k,int node){
        int count = 0;
        ListNode* curr = head;
        ListNode* prev = nullptr;
        ListNode* next = nullptr;
        
        while(curr!=nullptr && count < k && node >= k){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        
        if(node < k){
            return head;
        }
        
        if(next != nullptr){
            head->next = dfs(next,k,node - k);
        }
        
        return prev;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        int node = 0;
        ListNode* ptr = head;
        while(ptr!= nullptr){
            node++;
            ptr = ptr->next;
        }
        
        ListNode* res = dfs(head,k,node);
        return res;
    }
};