// * You are given the heads of two sorted linked lists list1 and list2.
// * Merge the two lists in a one sorted list. 
// * The list should be made by splicing together the nodes of the first two lists.
// * Return the head of the merged linked list

#include <stdlib.h>

// * Definition for singly-linked list.
struct ListNode {
	int		val;
	struct	ListNode *next;
};

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
	struct ListNode head;
	struct ListNode *tmplst = &head;

	if (list1 == NULL && list2 == NULL)
		return (NULL);
	while (list1 && list2)
	{
		if (list1->val < list2->val)
		{
			tmplst->next = list1;
			tmplst = tmplst->next;
			list1 = list1->next;
		}
		else
		{
			tmplst->next = list2;
			tmplst = tmplst->next;
			list2 = list2->next;
		}
	}
	if (list1)
		tmplst->next = list1;
	if (list2)
		tmplst->next = list2;
	return (head.next);
}