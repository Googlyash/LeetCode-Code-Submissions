//Striver SDE Sheet: Day 5
//Aug'14, 2023 10:47 pm

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*ans=new ListNode();
        ListNode*cur1=list1, *cur2=list2;
        ListNode*temp=ans;
        while(cur1 && cur2){
            if(cur1->val<=cur2->val){
                temp->next=cur1;
                cur1=cur1->next;
            }
            else {
                temp->next=cur2;
                cur2=cur2->next;
            }
            temp=temp->next;
        }
        while(cur1){
            temp->next=cur1;
            cur1=cur1->next;
            temp=temp->next;
        }
        while(cur2){
            temp->next=cur2;
            cur2=cur2->next;
            temp=temp->next;
        }
        ans=ans->next;
        return ans;
    }
};