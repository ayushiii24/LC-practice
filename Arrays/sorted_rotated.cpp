//problem : to check if array is sorted and rotated
class Solution {
public:
    //approach : rotate and compare (brute force)
    // time complexity : O(n^2) space complexity : O(n)
    bool check(vector<int>& nums) {
        vector <int> sorted(nums);
        sort(sorted.begin(),sorted.end());
        int n=nums.size();
        for (int r=0;r<n;r++){
            if (nums==sorted) return true;

            int last = nums[n-1];
            for (int i=n-1;i>0;i--){
                nums[i] = nums[i-1];
            }
            nums[0]=last;
        }
        return false;
        
    }
};
