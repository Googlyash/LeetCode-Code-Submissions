// POTD Feb'8, 2025
// Feb'8, 2025 11:07 am


class NumberContainers {
    map<int, set<int>>v;
    unordered_map<int, int>mp;
public:
    NumberContainers() {
        
    }
    
    void change(int index, int number) {
        if(mp.find(index)!= mp.end()){
            v[mp[index]].erase(index);
        }
        v[number].insert(index);
        mp[index]= number;
    }
    
    int find(int number) {
        if(v[number].size()==0){
            return -1;
        }
        return *v[number].begin();
    }
};

// 16 min

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */