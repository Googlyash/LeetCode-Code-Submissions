//POTD Mar'24, 2024
//Mar'24, 2024 11:46 pm

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
    ListNode* reverseList(ListNode* head) {
        if(!head){
            return head;
        }
        ListNode* node=head, *pre=NULL, *suc=head->next;
        while(node){
            node->next=pre;
            pre=node;
            node=suc;
            if(suc)suc=suc->next;
        }
        return pre;
    }
};

//7 min