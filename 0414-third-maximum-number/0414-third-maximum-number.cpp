class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
        
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i == 0 || nums[i] != nums[i-1]) {
                count++;
                if (count == 3) {
                    return nums[i];
                }
            }
        }
        return nums[0];
    }
};