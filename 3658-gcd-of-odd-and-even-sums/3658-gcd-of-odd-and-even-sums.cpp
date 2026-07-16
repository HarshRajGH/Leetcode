class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumEven=0;
        int sumOdd=0;
        for (int i = 0; i < n; ++i) {
            sumOdd += (2 * i + 1);
        }
        
        for (int i = 1; i <= n; ++i) {
            sumEven += (2 * i);
        }
        return gcd(sumOdd, sumEven);
    }
};