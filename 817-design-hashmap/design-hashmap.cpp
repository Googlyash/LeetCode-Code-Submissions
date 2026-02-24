class MyHashMap {
    struct mp{
        int data;
        int val;
        mp* next;
        mp(int k=-1, int v=-1, mp* n= nullptr): data(k), val(v), next(n) {}

    };
public:
    vector<mp*> hashmap;
    MyHashMap() {
        hashmap.resize(1000, new mp());

    }
    
    void put(int key, int value) {
        int ind= key%1000;
        
        mp* temp= hashmap[ind];
        while(temp->next != nullptr){
            if(temp->next->data == key){
                temp->next->val= value;
                return;
            }
            temp =temp ->next;
        }

        temp->next= new mp(key, value);
    }
    
    int get(int key) {
        int ind= key%1000;
        
        mp* temp= hashmap[ind];
        while(temp!= NULL && temp->data != key){
            temp = temp->next;
        }

        return temp == nullptr ? -1 : temp->val;
    }
    
    void remove(int key) {
        int ind= key%1000;
        
        mp* temp= hashmap[ind];
        while(temp!= NULL && temp->next!=NULL && temp->next->data != key){
            temp = temp->next;
        }

        if(temp == NULL || temp->next==NULL){
            return;
        }

        mp* cur= temp->next;
        temp->next= temp->next->next;
        delete cur;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */