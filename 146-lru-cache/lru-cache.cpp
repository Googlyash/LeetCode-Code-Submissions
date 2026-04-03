// Apr'3, 2026 06:59 am
// LLD Practice

class Node{
public:
    int key, val;
    Node* prev;
    Node* next;

    Node(int k, int v): key(k), val(v), prev(nullptr), next(nullptr){}
};

class LRUCache {
    Node* head;
    Node* tail;
    int cap=0;
    unordered_map<int, Node*>cache;

    void remove(Node* node){
        node->next->prev= node->prev;
        node->prev->next= node->next;
    }

    void insert(Node* node){
        node->next= head->next;
        node->prev= head;
        head->next->prev= node;
        head->next= node;
    }
public:
    LRUCache(int capacity) {
        this->cap= capacity;
        head= new Node(-1, -1);
        tail= new Node(-1, -1);
        head->next= tail;
        tail->prev= head;
    }
    
    int get(int key) {
        // cout<<key<<" "<<mp[key]<<endl;
        if(cache.find(key)== cache.end()){
            return -1;
        }

        Node* node= cache[key];
        remove(node);
        insert(node);
        return node->val;
    }
    
    void put(int key, int value) {
        if(cache.find(key)!= cache.end()){

            Node* cur= cache[key];
            remove(cur);
            insert(cur);
            cache[key]->val= value;
        }
        else {
            if(cache.size()== cap){
                Node* lru = tail->prev;
                remove(lru);
                cache.erase(lru->key);
                delete lru;
            }
            Node* cur= new Node(key, value);
            insert(cur);
            cache[key]= cur;
        }
        return ;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */

 // 1h 31 min with tutorial gfg