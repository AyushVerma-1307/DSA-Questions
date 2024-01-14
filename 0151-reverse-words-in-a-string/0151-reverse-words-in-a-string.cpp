class Solution {
public:
    string reverseWords(string s) {
        int x = 0;
        vector<string> ans;
        bool first = false;
        for (int i = 0; i <= s.length(); i++) {
            if (isalpha(s[i]) ||isdigit(s[i])) {
                if (!first) {
                    first = true;
                    x = i;
                }
            } else if (s[i] == ' ' && first) {
                first = false;
                string str = "";
                for (int j = x; j < i; j++) {
                    str += s[j];
                }
                ans.push_back(str);
            }
        }

        if (first) { // Handle the last word if it exists
            string str = "";
            for (int j = x; j < s.length(); j++) {
                str += s[j];
            }
            ans.push_back(str);
        }

        string result;
        for (int i = ans.size() - 1; i >= 0; i--) {
            result += ans[i];
            if (i > 0) {
                result += " ";
            }
        }
        return result;
    }
};