//PROBLEM : 560. Subarray Sum Equals K
class Solution {
public:
    //APPROACH : finding all possible subarrays
    //tc : O(n^2) , sc : O(1)
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        for (int i=0 ; i<nums.size() ; i++){ //start of subarr
            int sum=0;
            for (int j=i ; j<nums.size(); j++){ //end of subarr
                sum=sum+nums[j]; //adding curr element to subarr sum
                if (sum==k) count++;
            }
        }
        return count;
    }
};
