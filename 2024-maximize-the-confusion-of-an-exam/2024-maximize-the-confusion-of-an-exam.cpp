class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int left=0;
        int ans=0;
        int maxfreq=0;

       unordered_map<char,int>mp;

       for(int i=0;i<answerKey.size();i++){
        mp[answerKey[i]]++;
       maxfreq=max(maxfreq,mp[answerKey[i]]);

       while((i-left+1)-maxfreq>k){
        mp[answerKey[left++]]--;
       }
       ans=max(ans,i-left+1);
       }
       return ans;
    }
};