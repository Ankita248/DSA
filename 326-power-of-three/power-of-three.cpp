class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0) return false;
        double logres=log10(n)/log10(3);
        return logres==floor(logres);
    }
};