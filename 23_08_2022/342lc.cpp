class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==0)
            return false;
        if(ceil(log2(n)/log2(4)) == floor(log2(n)/log2(4)))
           return true;
           return false;
    }
};