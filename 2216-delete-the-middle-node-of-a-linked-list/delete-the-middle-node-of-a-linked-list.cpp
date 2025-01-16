// Jan'15, 2025 10:25 am

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
    ListNode* deleteMiddle(ListNode* head) {
        if(!head->next){
            return NULL;
        }
        ListNode* slo= head, *fast= head->next->next;
        while(fast && fast->next){
            slo= slo->next;
            fast= fast->next->next;
        }
        slo->next= slo->next->next;

        return head;
    }
};

// 14 min