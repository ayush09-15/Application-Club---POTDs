/*Given an integer array nums, return the greatest common divisor of the smallest number and largest number in nums.

The greatest common divisor of two numbers is the largest positive integer that evenly divides both numbers.*/
class Solution {
public:
    int findGCD(vector<int>& nums) {
        int small=nums[0];
        int great=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<small)
            {
                small=nums[i];
            }
            if(nums[i]>great)
            {
                great=nums[i];
            }
        }
        return gcd(small,great);
    }
};