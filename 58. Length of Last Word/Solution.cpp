/*
  字符串从后往前判断：如果非空字符计数器不为零的话，遇到' '就停止输出了；
如果非空字符计数器为零而且一直遇到' '那就跳过知道计数器不为零位置。

*/



class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        for(int i = s.size()-1;i>=0;i--)
        {
            if(s[i] == ' ')
            {
                if(count == 0) continue;
                else break;
            }
            count++;
        }
        return count;
    }
};
