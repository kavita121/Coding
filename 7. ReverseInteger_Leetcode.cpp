//7. Reverse Integer
//Leetcode ACCEPTED

class Solution {
public:
    
    bool checkOverflow(long long a)
    {
        const int lim = 2e31;
        if(a>lim || a<-lim)
            return true;
        return false;
    }
    
    
    int reverse(int x) 
    {
        bool neg = (x<0) ? true : false;
        x = abs(x);
        long long rev = 0;
        int i=10;
        int temp = x;
        while(temp > 0)
        {
            rev = (temp%10)+ rev*i;
            if(checkOverflow(rev))
                return 0;
            temp /= 10;
        }
        if(neg)
            return -rev;
        return rev;
    }
};