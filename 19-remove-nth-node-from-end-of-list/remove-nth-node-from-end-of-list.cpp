//POTD Mar'3, 2024
//Mar'3,2024 11:12 pm
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* cur=head, *pre=head;
        while(n--){
            cur= cur->next;
        }
        if(!cur){
            return pre->next;
        }
        while(cur->next){
            cur=cur->next;
            pre=pre->next;
        }
        pre->next= pre->next->next;
        return head;
    }
};

//4 min