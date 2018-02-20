/*
    这类题用哈希表是最简单求解的，而位操作则是最佳解法。
*/

#if 0
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> mapping;
        for(int i=0;i<nums.size();i++)
        {
            mapping[nums[i]] += 1;
        }
        
        for(map<int,int>::iterator it = mapping.begin();it != mapping.end(); it++)
            if(it->second == 1) return it->first;
        
        return 0;
        
    }
};
#endif

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ones = 0;
        int twos = 0;
        for(int i=0;i<nums.size();i++)
        {
            ones = (ones ^ nums[i]) & ~twos;
            twos = (twos ^ nums[i]) & ~ones;
        }
        return ones;       
    }
};

