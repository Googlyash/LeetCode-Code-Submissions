// Mar'14, 2026 05:34 pm
// Graph practice

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
    Node* dfs(map<Node*, Node*>&vis, Node*node){
        if(!node){
            return NULL;
        }
        if(vis.find(node) != vis.end()){
            return vis[node];
        }

        Node* cur= new Node(node->val);
        vis[node]= cur;

        for(int i=0;i<node->neighbors.size(); i++){
            cur->neighbors.push_back(dfs(vis, node->neighbors[i]));
        }
        return cur;
    }
public:
    Node* cloneGraph(Node* node) {
        if(!node){
            return NULL;
        }
        map<Node*, Node*>vis;
        return dfs(vis, node);
    }
};

// Comments
// 16 min