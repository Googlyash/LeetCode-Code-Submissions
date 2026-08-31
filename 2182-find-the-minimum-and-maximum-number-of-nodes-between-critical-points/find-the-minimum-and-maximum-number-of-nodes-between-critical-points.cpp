// POTD Aug'31, 2026
// Aug'31, 2026 10:03 pm

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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int n=0, mx=0, mn=1e7;
        int fst=-1, last=-1;
        ListNode* cur= head->next;
        int pre= head->val;
        while(cur && cur->next){
            n++;
            int nxt= cur->next->val;
            int curVal= cur->val;
            if((max({pre, nxt, curVal})==curVal || min({pre, nxt, curVal})==curVal) && curVal!= pre && curVal!=nxt){
                if(fst==-1){
                    fst= n;
                }
                if(last!=-1){
                    mn= min(mn, n-last);
                    cout<<n<<" "<<last<<endl;
                }
                last=n;
            }
            pre= curVal;
            cur= cur->next;
        }
        mx= last-fst;
        mx= mx>0 ? mx : -1;
        mn= mn<1e7 ? mn : -1;
        return {mn, mx};
    }
};

// 14 min