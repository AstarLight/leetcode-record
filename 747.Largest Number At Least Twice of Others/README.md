思路：先从小到大排序(排两轮即可，获取最大值和次大值)，排序过程记录下最大值的位置。
根据题目要求检查最大值是不是次大值两倍或以上即可。需要注意一些特殊情况：

比如test case 数组中只有一个数的；
次大值是0的，就不能拿最大值去除它了。这些特殊情况单独处理即可。