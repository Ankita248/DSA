class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int l=nums.size();
        int p=0,n=0;
        vector<int>pos;
        vector<int>neg;
        for(int i=0;i<l;i++){
            if(nums[i]>0){
                pos.push_back(nums[i]);
            }
            else{
                neg.push_back(nums[i]);
            }
        }
        vector<int>result;
        while(n<l/2){
            result.push_back(pos[p]);
            p++;
            result.push_back(neg[n]);
            n++;
        }
        return result;
    }
};