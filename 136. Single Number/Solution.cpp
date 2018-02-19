/*
    bit map 异或,a⊕b⊕a=(a⊕a)⊕b=0⊕b=b
    时间复杂度：O(n)，空间复杂度：O(1)
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
