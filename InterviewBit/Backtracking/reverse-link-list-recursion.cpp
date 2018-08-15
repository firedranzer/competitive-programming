//https://www.interviewbit.com/problems/reverse-link-list-recursion/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* head; 
ListNode* Solution::reverseList(ListNode* A) {
    if(!A->next || !A){
        return A;
    }
    ListNode* head = reverseList(A->next);
    ListNode* temp = A->next;
    temp->next = A;
    A->next = NULL;
    return head;
}
