class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int count = 1;
            while (i + 1 < n && nums[i] == nums[i+1]) {
                count++;
                i++; 
            }
            if (count == 1) {
                return nums[i];
            }
        }
        return -1;
    }
};