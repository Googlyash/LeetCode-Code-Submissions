//POTD Sep'5, 2023
//Sep'5, 2023 05:58 pm
//Self

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head){
            return head;
        }
        Node*original=head;
        Node*copy=NULL;
        Node*ans=NULL;

        while(original){
            Node*temp= new Node(original->val);
            temp->next=original->next;
            original->next=temp;
            original=temp->next;
        }
        original=head;
        while(original){
            if(original->random!=NULL){
                original->next->random=original->random->next;
            }
            original=original->next->next;
        }
        original=head;
        ans=original->next;
        copy=ans;
        while(original){
            copy=original->next;
            original->next=copy->next;
            original=original->next;
            if(original){
                copy->next=original->next;
            }
            else {
                copy->next=NULL;
            }
        }
        return ans;
    }
};

//Earlier self solved at 05:58 pm in 20:21 minutes, O(n)
//Comments : O(1)