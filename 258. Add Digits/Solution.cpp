/*
    不断地去求余num，得到最低位的数字，并将所有最低位数字加起来得到sum，看一看sum是不是还是>=10，
    是的话就把sum赋给num，num继续上面步骤，如果不是就直接返回sum。
*/

class Solution {
public:
    int addDigits(int num) {
        if(num >0 && num < 10) return num;
        int sum = 0;
        while(1)
        {
            while(num)
            {
                sum += num%10;
                num /= 10;
            }
            if(sum / 10 > 0)
            {
                num = sum;
                sum = 0;
            }
            else
            {
                return sum;
            }
        }
        return 0;
    }
};
