class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        vector<int> pos(128, -1);
        int l = 0, ans = 0;

        for(int r = 0; r < s.size(); r++) {
            l = max(l, pos[s[r]] + 1);
            pos[s[r]] = r;
            ans = max(ans, r - l + 1);
        }

        return ans;
    }
};