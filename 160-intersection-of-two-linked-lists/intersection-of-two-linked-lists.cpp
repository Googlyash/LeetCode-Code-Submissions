//Striver SDE Sheet:Day 6
//Aug'15, 2023 12:27 am

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *a, ListNode *b) {
        unordered_map<ListNode*,int> mp1;
        ListNode*l1=a,*l2=b;
        while(l1!= NULL)
        {
            mp1[l1]=1;
            l1=l1->next;
        }
        while(l2!=NULL)
        {
            if(mp1[l2]>0)return l2;
            l2=l2->next;
        }
        return NULL;
    }
};
