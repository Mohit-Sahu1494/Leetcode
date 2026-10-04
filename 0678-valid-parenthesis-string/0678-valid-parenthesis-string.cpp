class Solution {
public:
    bool checkValidString(string s) {
        int low = 0;
        int high = 0;

        for (char ch : s) {

            if (ch == '(') {
                low++;
                high++;
            }

            else if (ch == ')') {
                low--;
                high--;
            }

            else { // '*'
                low--;   // '*' ko ')' maan lo
                high++;  // '*' ko '(' maan lo
            }

            // Minimum open brackets negative nahi ho sakte
            if (low < 0) {
                low = 0;
            }

            // Maximum bhi negative ho gaya
            // matlab ')' ko balance karne ke liye kuch nahi hai
            if (high < 0) {
                return false;
            }
        }

        return low == 0;
    }
};