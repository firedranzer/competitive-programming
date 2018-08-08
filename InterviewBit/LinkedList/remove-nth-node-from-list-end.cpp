//https://www.interviewbit.com/problems/remove-nth-node-from-list-end/

ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    if(A==NULL)return A;
    ListNode *curr = A;
    while(B-- && curr){
        curr = curr->next;
    }
    
    if(curr==NULL){
        ListNode* x = A->next;
        delete(A);
        return x;
    }
    
    ListNode* prev = A;
    ListNode* temp;
    
    while(curr!=NULL){
        temp = prev;
        curr=curr->next;
        prev=prev->next;
    }
    temp->next = prev->next;
    delete(prev);
    return A;
}