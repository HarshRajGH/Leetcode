class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {
        long long d0 = 0;     
        long long d1 = 1e18;  
        long long d2 = 1e18;   

        for (int i = 1; i <= n; i++) {
            long long cur = costs[i - 1] +
                            min({d0 + 1, d1 + 4, d2 + 9});

            d2 = d1;
            d1 = d0;
            d0 = cur;
        }

        return (int)d0;
    }
};