//problem = missing number
class Solution {
public:
    // approach : sorting (brute force)
    // time compelxity : O(nlogn) , space complexity : O(1)
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for (int i=0 ; i< nums.size();i++){
            if (nums[i]!=i) return i;
        }
        return nums.size();
    }
};
    //approach : mathematical sum formula (optimised)
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for (int i=0 ; i<n ; i++){
            sum=sum+nums[i];
        }
        return [(n*(n+1))/2]-sum; 
    }
};
