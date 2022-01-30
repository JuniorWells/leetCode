# You are given the heads of two sorted linked lists list1 and list2.
# Merge the two lists in a one sorted list. 
# The list should be made by splicing together the nodes of the first two lists.
# Return the head of the merged linked list

#Definition for singly-linked list.
class ListNode:
	def __init__(self, x):
		self.val = x
		self.next = None

def mergeTwoLists(self, l1: ListNode, l2: ListNode) -> ListNode:
	head = cur = ListNode[0]

	while l1 and l2:
		if l1.val <= l2.val:
			cur.next = l1
			l1 = l1.next
		else:
			cur.next = l2
			l2 = l2.next
		cur = cur.next

	cur.next = l1 or l2
	return head.next