class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if(nums.size()<2) return nums.size();
        int count = 0;
        int m_count = 0;
        for(int i=0;i<nums.size()-1;i++)
        {
            m_count++;
            if(nums[i+1]-nums[i]<=0)
            {
                if(count <= m_count)
                {
                    count = m_count;
                    m_count = 0;
                }
            }
        }
        
        if(m_count == nums.size()-1) count = nums.size();
        
        return count;
        
    }
};
