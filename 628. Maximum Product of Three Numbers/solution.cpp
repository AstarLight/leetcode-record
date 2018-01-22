class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        
        int max = nums[0]*nums[1]*nums[2];
        for(int i=0;i<nums.size()-2;i++)
            for(int j=i+1;j<nums.size()-1;j++)
                for(int k=j+1;k<nums.size();k++)
                {
                    int m_pro = nums[i]*nums[j]*nums[k];
                    if(max<m_pro) max = m_pro;
                }
        return max;
    }
};
