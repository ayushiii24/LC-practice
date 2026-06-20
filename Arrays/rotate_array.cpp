//Problem :Rotate array
class Solution {
public:
    //Approach : Sorting (optimised)
    // time complexity : O(n) , space complexity : O(1)
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        int x= nums.size()-k;
        reverse(nums.begin(), nums.begin()+x);
        reverse(nums.begin()+x,nums.end());
        reverse(nums.begin(),nums.end());
    }
};
