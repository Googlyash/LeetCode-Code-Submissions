//Striver SDE Sheet: Day 6
//Aug'14, 2023 11:28 pm

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(!l1)return l2;
        if(!l2)return l1;

        ListNode* ans=new ListNode();
        ListNode* temp=ans;
        int k=0, sum;
        while(l1 && l2){
            sum=l1->val+l2->val+k;
            k=sum/10;
            sum%=10;
            temp->next=new ListNode(sum);
            temp=temp->next;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1){
            sum=l1->val+k;
            k=sum/10;
            sum%=10;
            temp->next=new ListNode(sum);
            temp=temp->next;
            l1=l1->next;
        }
        while(l2){
            sum=l2->val+k;
            k=sum/10;
            sum%=10;
            temp->next=new ListNode(sum);
            temp=temp->next;
            l2=l2->next;
        }
        if(k){
            temp->next=new ListNode(k);
            temp=temp->next;
        }
        return ans->next;
    }
};