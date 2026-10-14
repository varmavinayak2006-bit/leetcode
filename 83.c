/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if (head == NULL || head->next == NULL){
        return head ;
    }
    struct ListNode *travel1, *travel2 ;
    travel1 = head ;
    travel2 = head ;
    while (1){
        travel2 = travel2->next ;
       
        if (travel1->val != travel2->val){
            travel1->next = travel2 ;
            travel1 = travel2 ;
        }
        if(travel1->val == travel2->val && travel2->next==NULL){    
            travel1->next = NULL ;
            return head ;
        }
    }
    
}