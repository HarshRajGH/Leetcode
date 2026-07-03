class Solution {
public:
    int romanToInt(string s) {
        int values[128] = {};

        values['I'] = 1;
        values['V'] = 5;
        values['X'] = 10;
        values['L'] = 50;
        values['C'] = 100;
        values['D'] = 500;
        values['M'] = 1000;

        int ans = 0, prev = 0;

        for (int i = s.size() - 1; i >= 0; i--) {
            if (values[s[i]] < prev)
                ans -= values[s[i]];
            else
                ans += values[s[i]];

            prev = values[s[i]];
        }

        return ans;
    }
};