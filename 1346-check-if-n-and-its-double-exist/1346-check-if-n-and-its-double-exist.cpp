class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int>mp;

        for(int i=0;i<arr.size();i++){
            mp[arr[i]]=i;
        }
        for(int i=0;i<arr.size();i++){
            int ans=2*arr[i];
            if(mp.count(ans)){
                if(mp[ans]!=i){
                    return true;
                }
            }
        }
        return false;
    }
};