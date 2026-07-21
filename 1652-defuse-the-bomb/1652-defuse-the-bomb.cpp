class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {

        int n = code.size();
        vector<int> ans(n, 0);
        if (k == 0)
            return ans;
        if (k > 0) {
            int sum = 0;
            // First window
            for (int i = 1; i <= k; i++)
                sum += code[i % n];
            ans[0] = sum;
            int left = 1;
            int right = k + 1;
            while (left < n) {
                sum -= code[left % n];
                sum += code[right % n];
                ans[left] = sum;
                left++;
                right++;
            }
        } else {
            k = -k;
            int sum = 0;
            for (int i = n - k; i < n; i++)
                sum += code[i];
            ans[0] = sum;
            int left = n - k;
            int right = 0;
            for (int i = 1; i < n; i++) {
                sum -= code[left % n];
                sum += code[right % n];
                ans[i] = sum;
                left++;
                right++;
            }
        }

        return ans;
    }
};