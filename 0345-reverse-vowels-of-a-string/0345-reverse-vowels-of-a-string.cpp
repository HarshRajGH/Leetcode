class Solution {
public:
    string reverseVowels(string s) {
        string vowels = "";
        string lookup = "aeiouAEIOU";
        
        for (char c : s) {
            if (lookup.find(c) != string::npos) {
                vowels += c;
            }
        }
        
        int v_index = vowels.length() - 1;
        
        for (int i = 0; i < s.length(); i++) {
            if (lookup.find(s[i]) != string::npos) {
                s[i] = vowels[v_index--];
            }
        }
        
        return s;
    }
};