//https://www.interviewbit.com/problems/list-cycle/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

ListNode* Solution::detectCycle(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(A==NULL || A->next==NULL){
        return NULL;
    }
    
    ListNode* slow = A;
    ListNode* fast = A;
    bool status = false;
    
    slow = slow->next;
    fast = fast->next->next;
    
    while(fast && fast->next){
        if(slow==fast){
            status = true;
            break;
        }
        fast = fast->next->next;
        slow = slow->next;
    }
    
    if(status == false){
        return NULL;
    }
    
    //When cycle detected. Finding first node of the loop.
    slow = A;
    while(slow && fast && fast!=NULL){
        if(slow==fast){
            break;
        }
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}
