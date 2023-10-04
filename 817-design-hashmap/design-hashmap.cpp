//POTD Oct'4, 2023
//Oct'4, 2023 03:22 pm

class MyHashMap {
    vector<int>myArray;
public:
    MyHashMap() {
        myArray= vector<int>(1e6+1, -1);

    }
    
    void put(int key, int value) {
        myArray[key]=value;
    }
    
    int get(int key) {
        return myArray[key];
    }
    
    void remove(int key) {
        myArray[key]=-1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */