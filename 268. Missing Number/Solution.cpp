/*
    这个一下子就想到啦，首先用等差数列求和公式，（首项+末项）* 项数 / 2 求得原本的数字总和，再求现在
    数组内的数字之和，最后两者之差就是丢失的那个数字。 时间复杂度O（n）,空间复杂度O(1)
*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int total = (0 + nums.size())*(nums.size()+1) / 2;
        int sum = 0;
        for(int i=0;i<nums.size();i++)
        {
            sum += nums[i];
        }
        return total - sum;
    }
};
