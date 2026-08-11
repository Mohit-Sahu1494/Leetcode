class Solution {
public:
    bool match(string str, string pattern) {
        if (str.length() != pattern.length()) return false;

        unordered_map<char, char> mpWord;
        unordered_map<char, char> mpPattern;

        for (int i = 0; i < str.length(); i++) {
            char w = str[i];
            char p = pattern[i];

            if (mpWord.count(p) && mpWord[p] != w) return false;
            if (mpPattern.count(w) && mpPattern[w] != p) return false;

            mpWord[p] = w;
            mpPattern[w] = p;
        }

        return true;
    }

    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;

        for (string str : words) {
            if (match(str, pattern)) {
                ans.push_back(str);
            }
        }

        return ans;
    }
};