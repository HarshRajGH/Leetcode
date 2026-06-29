class Solution {
public:
    string reverseVowels(string s) {
        int i = 0, j = s.length() - 1;
        bool v[256] = {false};
        for (char c : "aeiouAEIOU") {
            if (c) v[(unsigned char)c] = true;
        }
        
        while (i < j) {
            if (!v[(unsigned char)s[i]]) {
                i++;
            } else if (!v[(unsigned char)s[j]]) {
                j--;
            } else {
                swap(s[i++], s[j--]);
            }
        }
        return s;
    }
};