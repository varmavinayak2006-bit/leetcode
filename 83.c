/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode *travel1 , *travel2 ;
    travel1 = head ;
    travel2 = head ;
    while (1){
        travel2 = travel2->next ;
        if(travel1->val != travel2->val){
            travel1->next = travel2 ;
            travel1 = travel2 ;
        }
        if(travel1->next == NULL || travel2->next == NULL){
            break ;
        }
        if(travel1->val == travel2-> val ){
            struct ListNode *travel ;
            travel = travel1 ;
            while( travel->next != travel2 ){
                travel = travel->next ;
            }
           
  
            travel->next = NULL ;
            
            break ;
        }
    }
    return head ;
}