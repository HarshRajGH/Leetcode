class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        if (timeSeries.empty()) {
            return 0;
        }
        int total_duration = 0;
        for (int i = 1; i < timeSeries.size(); ++i) {
            total_duration += min(duration, timeSeries[i] - timeSeries[i - 1]);
        }
        total_duration += duration;
        return total_duration;
    }
};