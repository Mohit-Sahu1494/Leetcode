class Solution {
public:
    int compress(vector<char>& chars) {
        string ans = "";
        int index = 0;

        for (int i = 0; i < chars.size(); i++) {
            char ch = chars[i];
            int left = i;
            int count = 0;
            while (left < chars.size() && ch == chars[left]) {
                count++;
                left++;
            }
            chars[index++] = ch;
            if (count > 1) {
                string c = to_string(count);
                for (int i = 0; i < c.size(); i++) {
                    chars[index++] = c[i];
                }
            }
            i = left - 1;
        }
        return index;
    }
};