//Striver SDE Sheet:Day 6
//Aug'15, 2023 12:27 am

class Solution {
public:
    ListNode *getIntersectionNode(ListNode * headA, ListNode *headB) {
         if(headA == NULL || headB == NULL) return NULL;
    
        ListNode* a = headA;
        ListNode* b = headB;
        
        while( a != b){
            a = a == NULL? headB : a->next;
            b = b == NULL? headA : b->next;    
        }
        return a;
    }
};
