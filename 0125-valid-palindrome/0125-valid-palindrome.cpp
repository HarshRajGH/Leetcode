class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned = "";
        for (char c : s) {
            if (isalnum(c)) {
                cleaned += tolower(c);
            }
        }
        string reversed_str = cleaned;
        reverse(reversed_str.begin(), reversed_str.end());
        
        return cleaned == reversed_str;
    }
};