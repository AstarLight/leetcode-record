/*
  找小于等于目标数字的位置插入，如果没找到就返回字符串长度，即插入到字符串末尾。
*/



class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++)
        {
            if(target <= nums[i]) return i;
        }
        return nums.size();
    }
};
