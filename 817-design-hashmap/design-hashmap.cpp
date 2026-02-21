// System Design Practice
// Feb'21, 2026 10:46 pm

class MyHashMap {
    int n= 1e6+1;
    vector<int>mp;
public:
    MyHashMap() {
        mp.resize(n, -1);
    }
    
    void put(int key, int value) {
        mp[key]= value;
    }
    
    int get(int key) {
        return mp[key];
    }
    
    void remove(int key) {
        mp[key]= -1;
    }
};

// 5 min

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */

