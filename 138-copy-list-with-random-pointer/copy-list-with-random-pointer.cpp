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
        if(head==NULL)return head;
        Node* newnode= new Node(head->val);
        Node*temp=head;
        Node*main=newnode;
        while(temp!=NULL && temp->next!=NULL){
            Node*cur= new Node(0);
            main->val=temp->val;
            if(temp->next)cur->val=temp->next->val;
            main->next=cur;
            main=main->next;
            temp=temp->next;
        }
        temp=head;
        main=newnode;
        while(temp!=NULL){
            if(temp->random==NULL)main->random=temp->random;
            else {
                Node*randomTemp=head, *randomcur=newnode;
                while(randomTemp!=NULL){
                    if(temp->random==randomTemp){
                        main->random=randomcur;
                        break;
                    }
                    randomTemp=randomTemp->next;
                    randomcur=randomcur->next;
                }
            }
            temp=temp->next;
            main=main->next;
        }
        return newnode;
    }
};