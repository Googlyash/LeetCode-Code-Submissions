//Oct'04, 2023 04:18 pm
//Fraz: Youtube Video

class MyHashSet {
    vector<list<int>>mp;
    int siz;
public:
    MyHashSet() {
        siz=100;
        mp.resize(siz);
    }
    int hash(int key){
        return key%siz;
    }
    list<int>:: iterator search(int key){
        int i=hash(key);
        return find(mp[i].begin(), mp[i].end(), key);
    }
    void add(int key) {
        if(contains(key)){
            return;
        }
        int i= key%siz;
        mp[i].push_back(key);
    }
    

    void remove(int key) {
        if(!contains(key)){
            return;
        }
        int i=key%siz;;
        mp[i].erase(search(key));
        
    }
    
    bool contains(int key) {
        int i=key%siz;
        if(search(key)!= mp[i].end()){
            return true;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */