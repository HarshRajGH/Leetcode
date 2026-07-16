#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefixGcd(n);
        int currentMax = 0;
        for (int i = 0; i < n; ++i) {
            currentMax = max(currentMax, nums[i]);
            prefixGcd[i] = std::gcd(nums[i], currentMax);
        }
        sort(prefixGcd.begin(), prefixGcd.end());
        long long totalGcdSum = 0;
        int left = 0;
        int right = n - 1;
        
        while (left < right) {
            totalGcdSum += std::gcd(prefixGcd[left], prefixGcd[right]);
            left++;
            right--;
        }
        return totalGcdSum;
    }
};