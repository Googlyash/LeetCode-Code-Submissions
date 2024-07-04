//POTD Jul'4, 2024
//Jul'4, 2024 11:08 pm

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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* node=head->next;
        ListNode* ans= new ListNode();
        ListNode* temp= ans;
        
        while(node!=nullptr){
            int cur=0;

            while(node->val!=0){
                cur+=node->val;
                node= node->next;
            }
            ListNode* now= new ListNode();
            temp->next= now;
            cout<<temp->val<<" ";
            temp=temp->next;
            temp->val=cur;
            node= node->next;
            cout<<temp->val;
        }
        return ans->next;
    }
};

