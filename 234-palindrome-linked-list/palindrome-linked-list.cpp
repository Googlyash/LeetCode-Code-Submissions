//POTD Mar'21, 2024
//Mar'21, 2024 11:11 pm

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
        ListNode* cur=head, *pre= NULL;
        string s, s1;

        while(cur){
            s+= cur->val;
            cur= cur->next;
        }

        s1=s;
        reverse(s.begin(), s.end());
        return s1==s;
    }
};

//10 min