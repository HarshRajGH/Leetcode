class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        if (nums.empty()) return 0;
        int max_val = 0;
        for (int num : nums) {
            max_val = max(max_val, num);
        }
        vector<int> points(max_val + 1, 0);
        for (int num : nums) {
            points[num] += num;
        }
        int prev2 = 0;
        int prev1 = 0;
        for (int i = 0; i <= max_val; ++i) {
            int current = max(prev1, prev2 + points[i]);
            prev2 = prev1;
            prev1 = current;
        }
        return prev1;
    }
};