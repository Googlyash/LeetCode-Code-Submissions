//POTD Sep'6, 2023 03:07 pm

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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int n=0;
        ListNode*temp=head;
        while(temp){
            n++;
            temp=temp->next;
        }
        int rem=n%k, div=n/k;
        vector<ListNode*>ans;
        temp=head;
        while(temp){
            ListNode*cur=temp;
            ListNode*curtemp=cur;
            int curdiv=div;
            if(rem>0)curdiv++;
            while(--curdiv && curtemp){
                curtemp=curtemp->next;
            }
            if(curtemp)temp=curtemp->next;
            else temp=NULL;
            if(curtemp)curtemp->next=NULL;
            ans.push_back(cur);
            rem--;
        }
        while(ans.size()<k){
            ans.push_back(NULL);
        }
        return ans;
    }
};