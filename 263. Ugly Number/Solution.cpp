/*
    这道题想了好久好久，一直往复杂的方向求解，以为它考的是质数的判断和分解质因数。
    其实，看了答案才明白，只需让num分别除以2,3,5,看能不能被他整除，当然还需要分解质因数的。
*/


class Solution {
public:
    bool isUgly(int num) {        
        for(int i=2;i<6 && num;i++)
        {
            while(num%i == 0)  //循环是为了检测num是否只含2/3/5
                num /= i;
        }
        return num==1;
    }
};
