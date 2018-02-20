/*
    bit map 异或,a⊕b⊕a=(a⊕a)⊕b=0⊕b=b
    时间复杂度：O(n)，空间复杂度：O(1)
    考虑1^2^1 = 2^1^1，如下所示，其实对于每一位，只要他们出现的次数是偶数（成对出现），那么这一位就可以变为0。
    若果刚好有一个1落单，那么表明这是个只出现一次的数。
     01     (1)
   ^ 10     (2)
   ^ 01     (1)
   = 10 
*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ret = 0;
        for(int i=0;i<nums.size();i++)
        {
            ret ^= nums[i];
        }
        return ret;
    }
};
