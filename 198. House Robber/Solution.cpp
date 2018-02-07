/*
    贪心：每次检查两个房子，每次挑最钱多的偷，如果偷到是连号的，就不偷，跳过。
    动态规划：每次偷的房子其实是跟上一次偷的房子有关上上次偷的房子有关，计算这次第f[n-2]次后，计算一下偷第n-1的房子好还是偷第n个房子就可以了。
             max(f[i-2]+nums[i],f[i-2])
*/

class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==0) return 0;
        if(nums.size()==1) return nums[0];
        if(nums.size()==2) return max(nums[0],nums[1]);
        vector<int> f(nums.size(),0);
        f[0] = nums[0];
        f[1] = max(nums[0],nums[1]);
        for(int i=2;i<nums.size();i++)
        {
            f[i] = max(f[i-2]+nums[i],f[i-1]);
        }
        return f[nums.size()-1];
    }
};
