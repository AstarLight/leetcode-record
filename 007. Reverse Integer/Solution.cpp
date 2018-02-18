/*
    溢出可以用INT_MAX和INT_MIN来判断，在此之前，需要定义long long类型的ret
*/

class Solution {
public:
    int reverse(int x) {
        vector<int> record;
        long long target = abs(x);
        int i = 0;
        while(target)
        {
            record.push_back(target % 10);
            target /= 10;
        }
        long long ret = 0;
        long long jinwei = 1;
        for(int j=record.size()-1;j>=0;j--)
        {      
            ret += record[j] * jinwei;
            jinwei *= 10;
        }
        ret = x>=0?ret:-ret;
        return ret > INT_MAX || ret < INT_MIN?0:ret;
    }
};
