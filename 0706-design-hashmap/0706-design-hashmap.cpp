class MyHashMap {
public:
    map<int, int> intMap;

    MyHashMap() {
    }
    
    void put(int key, int value) {
        intMap[key] = value;
    }
    
    int get(int key) {
        return intMap.find(key) != intMap.end() ? intMap[key] : -1;
    }
    
    void remove(int key) {
        intMap.erase(key);
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */