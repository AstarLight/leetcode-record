/*
  动态规划，先得到转移方程：F[N] = F[N-1] + F[N-2],即爬到第N层的走法是跟爬到第N-1层和第N-2层的走法是有关的。 
  然后考虑边界情况：第一层和第二层，单独处理直接返回。
*/



class Solution {
public:
    int climbStairs(int n) {
        //F[N] = F[N-1]+F[N-2]
        if(n==0) return 0;
        else if(n==1) return 1;
        else if(n==2) return 2;
        
        int step[n] = {0};
        step[0] = 1;
        step[1] = 2;
        for(int i=2;i<n;i++)
        {
            step[i]=step[i-1] + step[i-2];
        }
        
        return step[n-1];
    }
};
