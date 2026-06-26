class Solution {
public:
    int countPrimes(int n) {
        if (n < 3) return 0;

        vector<bool> isPrime(n, true);
        int count = 1; 
        for (int i = 3; i < n; i += 2)
            count++;

        for (long long i = 3; i * i < n; i += 2) {
            if (isPrime[i]) {
                for (long long j = i * i; j < n; j += 2 * i) {
                    if (isPrime[j]) {
                        isPrime[j] = false;
                        count--;
                    }
                }
            }
        }

        return count;
    }
};