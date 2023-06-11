

class SnapshotArray {
public:
unordered_map<int, map<int,int>>mp; 
int cnt=0;
    SnapshotArray(int length){}
    
    void set(int index, int val) {
        mp[index][cnt]=val;
    }
    
    int snap() {
        return cnt++;
        // cnt++;
    }
    
    int get(int index, int snap_id) {
        auto it= mp[index].upper_bound(snap_id);
        return it== begin(mp[index])? 0: prev(it)->second;
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */