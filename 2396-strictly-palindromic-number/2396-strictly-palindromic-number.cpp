class Solution {
public:
    bool isStrictlyPalindromic(int n) {
       for (int i = 2; i <= n - 2; i++) {
            long long reverse = 0;
            int num = n;
            string s="";
            while (num != 0) {
                s.push_back((num%i)+'0');
                num/=i;
            }

            int l = 0;
            int r = s.length() - 1;

            while (l < r) {
            if (s[l] != s[r])
                return false;
            l++;
            r--;
        }



        }
return true;
    }
};