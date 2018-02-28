/*
    1.暴力，两次遍历：O（n^2）
    2.插入哈希表后再遍历判断，O(n)
    3.边插入哈希表边判断：O(1)
*/

#if 0
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> result;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }
    }
};


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        map<int,int> hash;
        for(int i=0;i<nums.size();i++)
        {
            hash[nums[i]] = i;
        }
        
        vector<int> result;
        for(int i=0;i<nums.size();i++)
        {
            if(hash.find(target-nums[i])!=hash.end() && i!= hash[target-nums[i]])
            {
                result.push_back(i);
                result.push_back(hash[target-nums[i]]);
                return result;
            }
        }
        return result;
    }
};
#endif

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        map<int,int> hash;
        vector<int> result;
        for(int i=0;i<nums.size();i++)
        {
            if(hash.find(nums[i])!=hash.end())
            {
                result.push_back(i);
                result.push_back(hash[nums[i]]);
                break;
            }
            hash[target-nums[i]] = i;
        }      
        return result;
    }
};
