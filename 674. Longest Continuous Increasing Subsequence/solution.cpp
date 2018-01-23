class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if(nums.size()<2) return nums.size();
        int count = 1;
        int m_count = 1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]-nums[i-1]>0)
            {
                m_count++;
                if(count < m_count)
                {
                    count = m_count;
                }
            }
            else
            {
                m_count = 1;
            }
        }
        
        //if(m_count == nums.size()-1) count = nums.size();
        
        return count;
        
    }
};
