class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
       long int ans=0;
        int n = weights.size()-1;
        k = min(k-1, (int)weights.size() - k);

        for(int i=0;i<n;i++)
            weights[i] += weights[i+1];
        weights.pop_back();

        nth_element(weights.begin(), weights.end()-k, weights.end());
        for(int i=0;i<k;i++)
            ans += weights[n-1-i];

        nth_element(weights.begin(), weights.begin()+k, weights.end());
        for(int i=0;i<k;i++)
            ans -= weights[i];

        return ans; 
    }
};