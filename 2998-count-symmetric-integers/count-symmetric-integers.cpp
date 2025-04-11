class Solution {
public:
    static int countSymmetricIntegers(const int l, const int h) { // O(h-l)
        int count = 0;
        for (int i = l; i <= h; ++i) {
            if (i < 100) {
                count += i % 11 == 0;
            } else if (i > 1000) {
                const int i0 = i % 10;
                const int i1 = (i % 100) / 10;
                const int i2 = (i % 1000) / 100;
                const int i3 = i / 1000;
                count += i0 + i1 == i2 + i3;
            }
        }
        return count;
    }
};