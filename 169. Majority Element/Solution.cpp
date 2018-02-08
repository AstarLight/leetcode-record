
/*
  可以选择的容器来存储相同元素的个数：哈希表，数组
  也可以使用排序法，即先排序，取有序序列中的n/2位置的值就是最多元素的值。
  
  最优方法当然是Moore majority vote algorithm(摩尔投票算法)
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        map<int,int> record;
        int thresh = nums.size() / 2;
        for(int i=0;i<nums.size();i++)
        {
            record[nums[i]] += 1;
        }
        for (map<int, int>::iterator it = record.begin(); it != record.end(); it++)
        {
            if(it->second > thresh) return it->first;
        }
    }
};
