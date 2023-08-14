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
        while(cur1!=NULL && cur2!=NULL){
            ListNode*cur=new ListNode();
            if(cur1->val<=cur2->val){
                cur->val=cur1->val;
                cur1=cur1->next;
            }
            else {
                cur->val=cur2->val;
                cur2=cur2->next;
            }
            temp->next=cur;
            temp=temp->next;
        }
        while(cur1!=NULL){
            ListNode*cur=new ListNode();
            cur->val=cur1->val;
            cur1=cur1->next;
            temp->next=cur;
            temp=temp->next;
        }
        while(cur2!=NULL){
            ListNode*cur=new ListNode();
            cur->val=cur2->val;
            cur2=cur2->next;
            temp->next=cur;
            temp=temp->next;
        }
        ans=ans->next;
        return ans;
    }
};