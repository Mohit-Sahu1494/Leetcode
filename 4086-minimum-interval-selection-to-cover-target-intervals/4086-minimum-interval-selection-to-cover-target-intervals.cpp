class Solution {
public:
    int minSelection(vector<vector<int>>& availableIntervals, vector<vector<int>>& targetIntervals) {
        // merge target intervals (closed, so touching ones merge too)
        sort(targetIntervals.begin(), targetIntervals.end());
        vector<pair<int,int>> comp;
        for (auto &t : targetIntervals) {
            if (!comp.empty() && t[0] <= comp.back().second)
                comp.back().second = max(comp.back().second, t[1]);
            else
                comp.push_back({t[0], t[1]});
        }

        sort(availableIntervals.begin(), availableIntervals.end());
        int n = availableIntervals.size();

        int i = 0, cnt = 0;
        long long best = LLONG_MIN, e = LLONG_MIN;

        for (auto &[L, R] : comp) {
            // make sure point L is covered
            if (e < L) {
                while (i < n && availableIntervals[i][0] <= L) {
                    best = max(best, (long long)availableIntervals[i][1]);
                    i++;
                }
                if (best < L) return -1;
                cnt++;
                e = best;
            }
            // extend coverage till R
            while (e < R) {
                while (i < n && availableIntervals[i][0] <= e) {
                    best = max(best, (long long)availableIntervals[i][1]);
                    i++;
                }
                if (best <= e) return -1;
                cnt++;
                e = best;
            }
        }
        return cnt;
    }
};