class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        long long minPrefix = 0, maxPrefix = 0, sum = 0;

        for (int diff : differences) {
            sum += diff;
            minPrefix = min(minPrefix, sum);
            maxPrefix = max(maxPrefix, sum);
        }

        long long minStart = (long long)lower - minPrefix;
        long long maxStart = (long long)upper - maxPrefix;

        return max(0LL, maxStart - minStart + 1);
    }
};