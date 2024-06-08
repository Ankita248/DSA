class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int n=nums.length;
        int c=0, ans=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1)
            c++;
            else
            c=0;
            ans=Math.max(c,ans);
        }
        return ans;
    }
}