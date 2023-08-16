//Striver SDE Sheet: Day 6
//Aug'17,2023 01:20 am

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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode*cur=head;
        int cnt=0;
        while(cur!=NULL  && cnt!=k){
            cur=cur->next;
            cnt++;
        }
        if(cnt==k){
            cur=reverseKGroup(cur, k);
            while(cnt--){
                ListNode*temp= head->next;
                head->next=cur;
                cur=head;
                head=temp;
            }
            head=cur;
        }
        return head;
    }
};

//Comments

//Earlier try
        // if(head==NULL || head->next==NULL)return head;
        // int n=0;
        // ListNode*temp=head, *cur;
        // while(temp){
        //     temp=temp->next;
        //     n++;
        // }
        // temp=head;
        // if(k>n)return head;
        // // return temp;
        // for(int i=0;i<n-k+1; i+=k){
        //     ListNode*ahead=temp;
        //     int j=0;
        //     while(j++<k && ahead ){
        //         ahead=ahead->next;
        //     }
        //     j=0;
        //     ListNode*prev=temp;
        //     // if(!(temp->next))break;
        //     temp=temp->next;
        //     prev->next=ahead;
        //     // if(!(temp->next))break;
        //     // prev->next=NULL;
        //     while(j++<k-2 && temp){
        //         cur=temp->next;
        //         temp->next=prev;
        //         prev=temp;
        //         temp=cur;
        //     }
        //     temp->next=prev;
        //     // head=temp;
        //     // if(i==1)
        //     // return head;
        //     // if(i==1)
        //     // return temp;
        //     // if(1==1)return ahead;
        //     // head=temp;
        //     temp=ahead;
        //     // if(!ahead) break;
        // }
        // temp=head;
        // return head;