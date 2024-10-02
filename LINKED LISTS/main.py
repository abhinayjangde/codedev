# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def removeElements(self, head, val):
        
        dummy = ListNode(next=head)
        current = dummy
        print("Dummy", dummy.next)
        while current.next:
            if current.next.val == val:
                current.next = current.next.next
            else:
                current = current.next
        
        return dummy.next

# Time complexity: O(n)
# Space complexity: O(1)
linked_list = ListNode(7)
linked_list.next = ListNode(7)
linked_list.next.next = ListNode(7)
linked_list.next.next.next = ListNode(7)
linked_list.next.next.next.next = ListNode(7)
linked_list.next.next.next.next.next = None

sol = Solution()
sol.removeElements(linked_list, 6)
while(linked_list):
    print(linked_list.val)
    linked_list = linked_list.next