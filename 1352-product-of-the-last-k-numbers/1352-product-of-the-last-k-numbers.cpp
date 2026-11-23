class ProductOfNumbers {
public:
   vector<int>st;
    ProductOfNumbers() {
    
    }
    
    void add(int num) {
           st.push_back(num);
    }
    
    int getProduct(int k) {
         int product=1;
        int n=st.size()-k;
        for(int i=n;i<st.size();i++){
            product*=st[i];
        }
      return product;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */