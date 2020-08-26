 ListNode* reverse(ListNode* A, int B){
     ListNode* curr = A;
     ListNode* prev = nullptr;
     ListNode* next = nullptr;
     int count = 0;
     while(curr != nullptr && count < B){
         next = curr->next;
         curr->next = prev;
         prev = curr;
         curr = next;
         count++;
     } 
     if(next != nullptr){
         A->next = reverse(next,B);
     }
     return prev;
 }
 
ListNode* Solution::reverseList(ListNode* A, int B) {
    ListNode* ans = reverse(A,B);
    return ans;
}
