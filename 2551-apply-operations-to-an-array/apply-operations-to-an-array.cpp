class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int l=nums.size();
        for(int i=0;i<l-1;i++){
            if(nums[i] == nums[i+1]){
                nums[i]*=2;
                nums[i+1]=0;
            }
        }
        int left=0;
        for(int right=0;right<l;right++){
            if(nums[right]!=0){
                swap(nums[left],nums[right]);
                left++;
            }
        }
        return nums;
    }
};