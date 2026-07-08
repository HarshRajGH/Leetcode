class Solution {
public:
    std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::unordered_set<int> set1(nums1.begin(), nums1.end());
        std::unordered_set<int> res_set;
        for (int num : nums2) {
            if (set1.count(num)) res_set.insert(num);
        }
        return std::vector<int>(res_set.begin(), res_set.end());
    }
};