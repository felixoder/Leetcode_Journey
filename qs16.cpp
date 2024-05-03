/* 83. Remove Duplicates from Sorted List
Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.

 

Example 1:


Input: head = [1,1,2]
Output: [1,2]
*/
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
    ListNode* deleteDuplicates(ListNode* head) {
	if(head == NULL || head -> next == NULL){
		return head;
	}
	int temp = head -> val;
	ListNode*tempHead = head -> next;
	ListNode*prev = head;
	while(tempHead != NULL){
		if(tempHead -> val != temp){
			temp = tempHead -> val;
			prev = tempHead;

		}
		else{
			prev -> next = tempHead -> next;
			prev = tempHead;
		}
	}
	return head;

    }
};


/*
 *
 * Simple Problem just draw the LinkedList and simple slow and fast pointer approach (Tortoise and Hare approach)
 */

