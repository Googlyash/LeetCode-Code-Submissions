//POTD Oct'4, 2023
//Oct'4, 2023 03:22 pm
//Fraz YouTube: https://www.youtube.com/watch?v=xVEGczCJCHs

class MyHashMap {
    vector<list<pair<int, int>>>mp;
    int siz;
public:
    MyHashMap() {
        siz=100;
        mp.resize(siz);
    }
    
    int hash(int key){
        return key%siz;
    }
    list<pair<int, int>>:: iterator search(int key){
        int i=hash(key);
        auto it=mp[i].begin();
        while(it!=mp[i].end()){
            if(it->first==key){
                return it;
            }
            it++;
        }
        return it;
    }
    void put(int key, int value) {
        remove(key);
        int i=hash(key);
        mp[i].push_back({key, value});
    }
    
    int get(int key) {
        int i=hash(key);
        if(search(key)==mp[i].end()){
            return -1;
        }
        return search(key)->second;
    }
    
    void remove(int key) {
        int i=hash(key);
        if(get(key)==-1){
            return ;
        }
        mp[i].erase(search(key));
    }
};

//This one is optimal one
//Self Done Earlier: By Brute Force
/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */