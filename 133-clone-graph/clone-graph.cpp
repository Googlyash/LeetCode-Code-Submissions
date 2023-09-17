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
    Node* solve(Node* node, unordered_map<Node*, Node*>&mp){
        if(node==NULL){
            return NULL;
        }
        if(mp.find(node)!=mp.end())return mp[node];
        mp[node]=new Node(node->val, {});
        vector<Node*>copyn;
        for(auto it:node->neighbors){
            mp[node]->neighbors.push_back(solve(it, mp));
        }
        return mp[node];
    }
public:
    Node* cloneGraph(Node* node) {
        unordered_map<Node*, Node*>mp;
        return solve(node, mp);
    }
};


//Earlier Self: 18 Min
//More optitmized