class MyHashMap {
public:
    int harr[1000001]={};
    MyHashMap() {
        for(int i=0;i<=1000000;i++){
            harr[i]=-1;
        }
        
    }
    
    void put(int key, int value) {
        harr[key]=value;
    }
    
    int get(int key) {
        return harr[key];
    }
    
    void remove(int key) {
        harr[key]=-1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */