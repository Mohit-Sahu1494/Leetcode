class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
        vector<int>nse(heights.size());
        vector<int>pse(heights.size());
        int n=heights.size();
        for(int i=n-1;i>=0;i--){
            while(!st.empty() &&heights[st.top()]>=heights[i])st.pop();
            if(st.empty()) nse[i]=n;
            else nse[i]=st.top();
            st.push(i);
        }
        while (!st.empty()){
            st.pop();
        }
        for(int i=0;i<n;i++){
              while(!st.empty() &&heights[st.top()]>=heights[i])st.pop();
            if(st.empty()) pse[i]=-1;
            else pse[i]=st.top();
            st.push(i);
        }
        int maxi=-1;
        for(int i=0;i<n;i++){
            int area=heights[i]*(nse[i]-pse[i]-1);
             maxi=max(maxi,area);
        }
       return maxi;
    }
};