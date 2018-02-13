/*
    这种题其实就是考26进制怎么转10进制
*/

class Solution {
public:
    int titleToNumber(string s) {
        int ret = 0;
        int tmp = 1;
        for(int i=s.size()-1;i>=0;i--)
        {
            ret += (int)(s[i] - 'A' + 1)*tmp;
            tmp *= 26;
        }
        
        return ret;
    }
};
