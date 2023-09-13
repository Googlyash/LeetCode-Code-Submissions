//Sep'13, 2023 11:10 pm
//Striver SDE: Day7 LinkedList

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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)return head;
        ListNode*temp=head;
        ListNode*updated=new ListNode(0);
        ListNode*upTemp=updated;
        int n=0, i=0;
        while(temp){
            temp=temp->next;
            n++;
        }
        temp=head;
        k%=n;
        if(k==0)return head;
        while(i<n-k){
            i++;
            upTemp->next=temp;
            temp=temp->next;
            upTemp=upTemp->next;
        }
        head=temp;
        upTemp->next=NULL;
        while(temp->next){
            temp=temp->next;
        }
        temp->next=updated->next;
        return head;
    }
};

//9min, 1wrong: [], 0