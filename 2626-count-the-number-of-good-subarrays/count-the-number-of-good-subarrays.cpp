class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        long long ans = 0;
        long long currentPairs = 0;
        unordered_map<int, long long> frequency;
        int left = 0;
        int n = nums.size();
        
        for (int right = 0; right < n; ++right) {
            
            currentPairs += frequency[nums[right]];
            frequency[nums[right]]++;
            
            
            while (currentPairs >= k && left <= right) {
                ans += (n - right);
                frequency[nums[left]]--;
                currentPairs -= frequency[nums[left]];
                ++left;
            }
        }
        
        return ans;
    }
};