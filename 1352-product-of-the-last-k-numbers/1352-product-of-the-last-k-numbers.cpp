class ProductOfNumbers {
private:
     vector<int> v;
public:
    int n=0;
    ProductOfNumbers() {
        v.push_back(1);
    }
    
    void add(int num) {
        if(num==0){
            v.clear();
            v.push_back(1);
        }
        else{
            int t=v.back()*num;
            v.push_back(t);
        }
    }
    
    int getProduct(int k) {
        int u=v.size();
        if(k>=u) return 0;
        return v[u-1]/v[u-k-1];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */