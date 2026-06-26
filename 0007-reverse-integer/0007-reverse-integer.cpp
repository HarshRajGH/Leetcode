class Solution {
public:
    int reverse(int x) {
        long reverseNum = 0; // You already used 'long' to hold large numbers
        while (x != 0) {
            int digit = x % 10;
            reverseNum = reverseNum * 10 + digit;
            x = x / 10;
        }
    
        if (reverseNum > INT_MAX || reverseNum < INT_MIN) {
            return 0;
        }
        
        return reverseNum;
    }
};