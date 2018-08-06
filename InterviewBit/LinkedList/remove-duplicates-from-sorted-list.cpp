//https://www.interviewbit.com/problems/remove-duplicates-from-sorted-list/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode* head = A;
    if(head==NULL || head->next==NULL){
        return head;
    }
    
    
    while(head!=NULL && head->next!=NULL){
        ListNode* curr = head;
        ListNode* ahead = curr->next;
        if(head->val == head->next->val){
            curr->next = ahead->next;
            delete(ahead);
        }
        // Move only when values dont match
        else    head = head->next;
    }
    return A;
}
