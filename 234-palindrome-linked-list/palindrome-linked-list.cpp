//Striver SDE Sheet: Day 6
//Aug'16, 2023 06:49 pm
//Good Algo (using Rabbit-Hare Algo)


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
    bool isPalindrome(ListNode* head) {
        if(!head)return false;
        ListNode*slow=head, *fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode*prev=slow;
        slow=slow->next;
        prev->next=NULL;
        while(slow){
            ListNode*cur=slow->next;
            slow->next=prev;
            prev=slow;
            slow=cur;
        }
        fast=head;
        slow=prev;
        while(slow){
            if(fast->val!= slow->val){
                return false;
            }
            fast=fast->next;
            slow=slow->next;
        }
        return true;
    }
};