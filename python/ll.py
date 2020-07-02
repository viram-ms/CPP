# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def removeNthFromEnd(self, head: ListNode, n: int) -> ListNode:
        length = 0
        ptr = head
        
        while ptr:
            length = length + 1
            # print(ptr.val)
            ptr = ptr.next
        
        ptr = head
        preptr = ptr
        
        if length == 1:
            head = None
            return head
        elif length == n:
            return head.next   
        
        for x in range(length - n):
            preptr = ptr
            ptr = ptr.next
            
        print(preptr.val)
        print(ptr.val)
        if ptr.next:
            preptr.next = ptr.next
        else:
            preptr.next = None
            
        return head
               