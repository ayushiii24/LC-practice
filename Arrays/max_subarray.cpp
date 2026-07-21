//PROBLEM : 53. Maximum Subarray
class Solution {
public:
   //APPROACH : using running sum (brute force)
    //tc : O(n^2) , sc :O(1) 
    //BUT THIS GIVES TLE
    int maxSubArray(vector<int>& nums) {
        int max_sum=INT_MIN;
        for (int i= 0 ; i< nums.size();i++){
            int sum=0;
            for (int j=i ; j<nums.size();j++){
                sum=sum+nums[j];
                if(sum>max_sum) max_sum=sum;
            }
        }
        return max_sum;
    }
    //APPROACH : kadane's algo (otpimised)
    //tc : O(n) , sc : O(1)
    int maxSubArray(vector<int>& nums) {
        int curr_sum = 0;
        int max_sum = nums[0]; //init. first element to handle arr with only neg values
        for (int i=0; i< nums.size(); i++){
            curr_sum = curr_sum+nums[i];
            max_sum = max(max_sum,curr_sum);
            if (curr_sum < 0) curr_sum=0; //resetting to 0 as neg sum wont help maximizing any subarr
        }
        return max_sum;
    }
};
