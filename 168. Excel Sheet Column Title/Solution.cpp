/*
    法一：非递归
    法二：递归,边界是n==0
*/

#if 0
class Solution {
public:
    string convertToTitle(int n) {
        string ret;
        while(n)
        {
            ret = (char)((n-1)%26 + 'A') + ret;
            n = (n-1) / 26;
        }
        return ret;
    }
};
#endif

class Solution {
public:
    string convertToTitle(int n) {
        string ret;
        if(n==0) return "";
        return convertToTitle(n/26) + (char)(--n%26+'A');
    }
};
