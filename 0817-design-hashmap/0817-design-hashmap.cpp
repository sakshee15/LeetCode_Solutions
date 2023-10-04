class MyHashMap {
public:
 unordered_map<int,int> s;
    MyHashMap() {
    }
    
    void put(int key, int value) {
        s[key]=value;
    }
    
    int get(int key) {
        if(s.find(key)==s.end()) return -1;
        else return s[key];
    }
    
    void remove(int key) {
        s.erase(key);
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */