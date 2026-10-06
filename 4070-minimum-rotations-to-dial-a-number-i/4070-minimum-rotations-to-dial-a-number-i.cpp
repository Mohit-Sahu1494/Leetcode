class Solution {
public:
    int minRotations(string s) {
         int current=0;
         int ans=0;
         for(char num : s){
            int next=num-'0';
            int distance=abs(current-next);
            int circumfance=10-distance;
            ans+=min(distance,circumfance);
            current=next;
         }
        return ans;
    }
};