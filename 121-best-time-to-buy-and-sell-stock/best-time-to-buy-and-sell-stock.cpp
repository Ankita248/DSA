class Solution {
public:
    int maxProfit(vector<int>& a) {
        int s=a.size();
        int min=INT_MAX,t=0,diff=0;
        for(int i=0;i<s;i++){

            if(a[i]<min){
                min=a[i];
            }
            else{
                t=a[i]-min;
                if(t>diff)
                diff=t;
            }

        }
        return diff;
    }
};