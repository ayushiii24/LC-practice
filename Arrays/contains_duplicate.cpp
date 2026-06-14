//Problem=2 [Contains duplicate]

class Solution {
public:
    // APPROACH 1: Sorting Method (brute force)
    // Time complexity: O(n log n)  Space complexity: O(1)
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for (int i=1;i<nums.size();i++){
            if (nums[i]==nums[i-1]) return true;
        }
            return false;
        }

    // APPROACH 2: Hash map method (optimised)
    // Time complexity: O(n)  Space Complexity: O(n)
    bool hasDuplicate(vector<int>& nums) {
        unordered_map <int,int> freq;
        for (int num : nums){
            freq[num]++;
        }
        for (auto i : freq){
            if (i.second > 1) return true;
        }
        return false;
        
    }
};


