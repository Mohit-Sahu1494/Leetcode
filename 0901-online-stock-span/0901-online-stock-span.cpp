class StockSpanner {
public:
stack<int>st;
vector<int>ans;
    StockSpanner() {
        
    }
    
    int next(int price) {
      int stock;
     ans.push_back(price);
     int i=ans.size()-1;
      while(!st.empty() &&ans[st.top()]<=price){
       st.pop();
      }
      if(st.empty()){
         stock=i+1;
      }
      else{
        stock=i-st.top();
      }
      st.push(i);
      return stock;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */