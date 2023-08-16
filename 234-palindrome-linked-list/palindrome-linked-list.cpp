//Striver SDE Sheet: Day 6
//Aug'16, 2023 06:18 pm
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
        ListNode*temp=head;
        vector<int>v;
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }
        for(int i=0;i<v.size()/2;i++){
            if(v[i]!=v[v.size()-1-i]){
                return false;
            }
        }
        return true;
    }
};