class Solution {
    public void moveZeroes(int[] nums) {
      int n=nums.length,k=0;
      int t=0;
      for(int i=0;i<n;i++){
        if(nums[i]!=0){
            t=nums[k];
            nums[k]=nums[i];
            nums[i]=t;
            k++;
        }
      }  
    }
}