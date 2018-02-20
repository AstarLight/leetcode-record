class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int,int> mapping;
        for(int i=0;i<nums.size();i++)
        {
            mapping[nums[i]] += 1;
        }
        vector<int> ret;
        for(map<int,int>::iterator it = mapping.begin();it != mapping.end(); it++)
            if(it->second == 1) ret.push_back(it->first);
        
        return ret;
    }
};
