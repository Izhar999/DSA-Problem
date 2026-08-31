class LRUCache {
public:
    list<int> l;
    unordered_map<int,pair<list<int>::iterator,int>> mp;
    int n;
    LRUCache(int capacity) {
        n=capacity;
    }
    
    void leastrecentlyused(int key){
        l.erase(mp[key].first);
        l.push_front(key);
        mp[key].first=l.begin();
    }
    int get(int key) {
        if(mp.find(key)==mp.end()) return -1;

        leastrecentlyused(key);
        return mp[key].second;
    }
    
    void put(int key, int value) {
        if(mp.find(key)!=mp.end()){
            mp[key].second=value;
            leastrecentlyused(key);
            return;
        }
        l.push_front(key);
        mp[key] = {l.begin(), value};
        

        if(mp.size()>n){
            int least_2b_del=l.back();
            l.pop_back();
            mp.erase(least_2b_del);
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */