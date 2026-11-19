class Solution {
    private:
     unordered_map<int,int>mp;
     int size;
public:
    Solution(int n, vector<int>& blacklist) {
         size=n-blacklist.size();
         unordered_set<int>st(blacklist.begin(),blacklist.end());
          int last=n-1;

          for(int x : blacklist){
           if(x<size){
             while(st.count(last)){
                last--;
            }
            mp[x]=last;
            last--;
           }
          }
    }
    int pick() {
     int num=rand()%size;
     if(mp.count(num)){
        return mp[num];
     }   
     return num;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(n, blacklist);
 * int param_1 = obj->pick();
 */