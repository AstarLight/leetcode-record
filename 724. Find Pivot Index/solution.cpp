class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
           if(nums.size()<=2) return -1;
           for(int i=0;i<nums.size();i++)
           {
               int left_sum = 0;
               int right_sum = 0;
               //calc left sum
               for(int l=0;l<i;l++)
               {
                   left_sum+=nums[l];
               }
               //calc right sum
               for(int r=i+1;r<nums.size();r++)
               {
                   right_sum+=nums[r];
               }
               
               if(left_sum == right_sum)
               {
                   return i;
               }
           }
           return -1;
    }
};
