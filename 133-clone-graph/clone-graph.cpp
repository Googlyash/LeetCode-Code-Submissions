//Stiver SDE: Day 23 Graph
//Sep'17, 2023 02:40 pm


/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
private:
    Node* solve(Node* node, map<int, int>&vis, map<Node*, Node*>&mp){
        if(node==NULL){
            return NULL;
        }
        if(vis[node->val]){
            return mp[node];
        }
        vis[node->val]=1;

        Node* copy=new Node();
        copy->val= node->val;
        mp[node]=copy;
        vector<Node*>copyn;
        for(auto it:node->neighbors){
            Node* adj= solve(it, vis, mp);
            copyn.push_back(adj);
        }
        copy->neighbors=copyn;
        return copy;
    }
public:
    Node* cloneGraph(Node* node) {
        if(node==NULL){
            return node;
        }
        map<int, int>vis;
        map<Node*, Node*>mp;
        return solve(node, vis, mp);
    }
};


//Self: 18 Min