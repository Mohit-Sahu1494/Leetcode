class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
           unordered_set<int>st;
        for(int i=0;i<candyType.size();i++){
            st.insert(candyType[i]);
        }
        int n=candyType.size();
        if(st.size()<n/2){
            return st.size();
        }
        return n/2;
    }
};