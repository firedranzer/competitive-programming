//https://www.interviewbit.com/problems/swap-list-nodes-in-pairs/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
// ListNode* swap(ListNode *n1, ListNode* n2){
//     int temp = n1->val;
//     n1->val = n2->val;
//     n2->val = temp;
//     return n2;
// }

ListNode* Solution::swapPairs(ListNode* A) {
    // struct ListNode* head = new ListNode;
    // head = A;
    // if(head==NULL || head->next==NULL)  return head;
    // while(head->next!= NULL){
    //     head->next = swap(head, head->next);
    //     head = head->next->next;
    // }
    // return head;
    
    struct ListNode* head = A;
    
    if(head==NULL || head->next==NULL)  return head;
    
    while(head!=NULL && head->next!=NULL){
        int temp = head->val;
        head->val = head->next->val;
        head->next->val = temp;
        head = head->next->next;
    }
    return A;
}
