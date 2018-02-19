/*
    三指针思路：pointer1指向nums1尾端(m-1)，pointer2指向nums2尾端(n-1)，我们计算合并后的总长度m+n，第三个
    pointer3就指向m+n-1位置。我们每次都检验pointer1和pointer2所指向的位置的值谁大，大的值就往pointer3位置放。
    注意循环终止条件是：pointer2移到0了。剩下的nums1里的值无需改变即可。还有i>=0这个条件也是非常重要的：考虑nums2
    中所有值都小于nums1的情况，此时i必然会变成-1，此时我们直接将 nums1[k--] = nums2[j--]即可。
*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int k=m+n-1,i=m-1,j=n-1;j>=0;)
        {
            nums1[k--] = i>=0 && nums1[i] > nums2[j]?nums1[i--]:nums2[j--];
        }
    }
};
