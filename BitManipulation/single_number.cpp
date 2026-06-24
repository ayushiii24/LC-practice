// problems : single number
class Solution {
public:
    // approach : bit manip (optimal)
    // time complexity : O(n), space complexity : O(1)
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for (int i=0 ;i<nums.size();i++){
            result=result^nums[i];  // if the bits are same, result=0 otherwise 1
        } 
        return result;
    }
};
