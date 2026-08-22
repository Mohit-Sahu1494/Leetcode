class Solution {
public:
    string arrangeWords(string text) {

        string word = "";
        vector<string> temp;

        for (int i = 0; i < text.size(); i++) {

            if (text[i] == ' ') {
                temp.push_back(word);
                word = "";  // ye important hai
            }
            else {
                word += text[i];
            }
        }

        temp.push_back(word);

        stable_sort(temp.begin(), temp.end(),
            [](const string &a, const string &b) {
                return a.length() < b.length();
            });

        // First letter lowercase karo
        temp[0][0] = tolower(temp[0][0]);

        // First word ka first letter uppercase
        temp[0][0] = toupper(temp[0][0]);

        // Baaki words lowercase
        for (int i = 1; i < temp.size(); i++) {
            temp[i][0] = tolower(temp[i][0]);
        }

        string str = "";

        for (int i = 0; i < temp.size(); i++) {
            if (i > 0)
                str += " ";

            str += temp[i];
        }

        return str;
    }
};