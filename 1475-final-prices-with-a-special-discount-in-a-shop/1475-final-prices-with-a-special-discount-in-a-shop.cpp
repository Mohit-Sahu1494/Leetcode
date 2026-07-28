class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
         vector<int>temp(prices.size());
         stack<int> st;
         for(int i=prices.size()-1;i>=0;i--){
            
            while(!st.empty() && st.top()>prices[i]){
                st.pop();
            }
            if(st.empty()){
                temp[i]=prices[i];
            }
            else{
                temp[i]=prices[i]-st.top();
            }
            st.push(prices[i]);
         }
         return temp;
    }
};