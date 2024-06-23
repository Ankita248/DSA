class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=cardPoints[i];
        }
        int ans=sum;
        k--;
        int i=cardPoints.size()-1;
        while(k>=0){
            sum=sum-cardPoints[k]+cardPoints[i];
            k--;
            i--;
            ans=max(ans,sum);
        }
        return ans;
    }
};