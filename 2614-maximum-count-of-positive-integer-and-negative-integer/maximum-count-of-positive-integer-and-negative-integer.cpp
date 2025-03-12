class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int neg=0,pos=0;
        for(int ch:nums){
            if(ch==0)
            continue;
            else if(ch<0)
            neg++;
            else
            pos++;
        }
        if(neg>pos)
        return neg;
        else
        return pos;
    }
};