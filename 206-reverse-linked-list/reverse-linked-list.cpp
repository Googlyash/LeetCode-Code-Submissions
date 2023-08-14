//Striver SDE Sheet: Day 5
//Aug'14, 2023 10:20 pm
//Recursive 

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
private:
    ListNode*reversing(ListNode*head, ListNode*next, ListNode*prev){
        if(head==NULL)return prev;
        return reversing(head->next, (head->next=prev), head);
    }
public:
    ListNode* reverseList(ListNode* head) {
        return reversing(head, NULL, NULL);
    }
};

//Comments