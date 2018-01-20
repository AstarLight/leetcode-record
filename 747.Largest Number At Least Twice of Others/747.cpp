#include <vector>
#include <iostream>


using namespace std;

class Solution {
public:
    int dominantIndex(vector<int>& nums)
    {
        int max = nums[0];
        int index = 0;
        for (int n = 0; n < 2;n++)
            for (int i = 1; i < nums.size(); i++)
            {
                if (n == 0)
                {
                    if (nums[i] > max)
                    {
                        max = nums[i];
                        index = i;
                    }
                }

                if (nums[i-1] > nums[i])
                {
                    int temp = nums[i - 1];
                    nums[i - 1] = nums[i];
                    nums[i] = temp;

                }

            }

        
        if (nums.size() == 1 && max > 0)
        {
            return index;
        }

        int max2 = nums[nums.size() - 2];
        if (max2 == 0 && max > 0)
        {
            return index;
        }
        else if (max / max2 >= 2)
        {
            return index;
        }
        else
        {
            return -1;

        }

    }
};

int main()
{
    int test_case[4] = { 0,2,3,0 };
    vector<int> varr(test_case, test_case + 4);

    Solution s;
    cout << s.dominantIndex(varr) << endl;

    return 0;
}