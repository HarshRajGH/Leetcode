class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0]; // Pehli string ko prefix maan liya
        
        for (int i = 1; i < strs.size(); ++i) {
            // Jab tak strs[i] ke shuru mein ans nahi milta (find != 0)
            while (strs[i].find(ans) != 0) {
                // ans ko piche se ek character chota kar do
                ans = ans.substr(0, ans.length() - 1);
                if (ans.empty()) return "";
            }
        }
        
        return ans;
    }
};