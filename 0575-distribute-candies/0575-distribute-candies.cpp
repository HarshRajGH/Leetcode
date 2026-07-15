class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        std::unordered_set<int> uniqueCandies(candyType.begin(), candyType.end());
        
        int maxAllowed = candyType.size() / 2;
                return std::min(uniqueCandies.size(), static_cast<size_t>(maxAllowed));
    }
};