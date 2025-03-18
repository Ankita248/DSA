class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
    int n = nums.size(), left = 0, right = 1, maxi = 1, mask = nums[0];

        while (right < n) { 
            while ((mask & nums[right]) != 0) 
            mask ^= nums[left++]; // Same as mask -= nums[left++]
            mask |= nums[right]; // Same as mask += nums[right]
            maxi = max(maxi, right - left + 1);
            right++; 
        }
        return maxi;
    }
};