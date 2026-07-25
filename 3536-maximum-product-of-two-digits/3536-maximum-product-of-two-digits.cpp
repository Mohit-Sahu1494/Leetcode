class Solution {
public:
    int maxProduct(int n) {
        
        vector<int>digits;

        while(n!=0){
            int d=n%10;
            digits.push_back(d);
            n/=10;
        }
        sort(digits.begin(),digits.end());
        int left=0;
        int right=digits.size()-1;

        int maximum=INT_MIN;

       for(int i=0;i<right;i++){
          int p=digits[right]*digits[i];
          if(p>maximum){
            maximum=p;
          }
       }
     return maximum;
    }
};