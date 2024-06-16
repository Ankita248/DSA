class Solution {
    public int search(int[] nums, int target) {
       int in=-1;
       int n=nums.length;
       int start=0,end=n-1,mid=0;
       while(start<=end){
        mid=(start+end)/2;
        if(nums[mid]==target)
        return mid;

        if(nums[mid]<target)
        start=mid+1;
        if(nums[mid]>target)
        end=mid-1;
       }
       return -1; 
    }
}