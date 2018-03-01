/*
    挺难的一道题，难度不在找这三个数，而是在于如何去重。
*/


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int> > res;
        if(nums.size()<3) return res;
        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size()-1;i++)
        {
            int low = i+1;
            int high = nums.size()-1;
            while(low<high)
            {
                int sum = nums[i]+nums[low]+nums[high];
                if(sum==0)
                {
                    vector<int> tmp;
                    tmp.push_back(nums[i]);
                    tmp.push_back(nums[low]);
                    tmp.push_back(nums[high]);
                    res.push_back(tmp);
                    while (low < high && nums[low] == tmp[1]) low++;
                    while (low < high && nums[high] == tmp[2]) high--;

                }
                else if(sum>0) high--;
                else low++;
            }
            while (i + 1 < nums.size() && nums[i + 1] == nums[i]) 
                i++;
        }
        return res;
    }
};
