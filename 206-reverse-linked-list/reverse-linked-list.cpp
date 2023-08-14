//Striver SDE Sheet: Day 5
//Aug'14, 2023 10:20 pm

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
        if(head==NULL)return head;
        ListNode* temp=head;
        vector<int>v;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        temp=head;
        reverse(v.begin(), v.end());
        int i=0;
        while(temp!=NULL){
            temp->val=v[i++];
            temp=temp->next;
        }
        return head;
    }
};