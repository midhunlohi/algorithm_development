class Solution {
public:
    ListNode* reverseList(ListNode* node) {
	    	// variables for the program
		ListNode *head = NULL;
		ListNode *curr = NULL;
		ListNode *prev = NULL;

		// Termination condition of the program
		if( !node->next ){
			return node;	
		}
		prev = node;
		curr = node->next;

		// Recursion call
	     	head = reverseList( curr );

		// Operation on the current and previous node
		curr->next = prev;
		node->next = NULL;

		// Return head of the linked list
		return head;
	}
};

