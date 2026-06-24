//Problem : Single number

class Solution {
public:
    //Approach 1: Hash Map 
    // Time Complexity: O(n) , space complexity : O(n)
    int singleNumber(vector<int>& nums) {
        unordered_map <int,int> freq;
        for (int i : nums){
            freq[i]++;
        }
        for (auto i : freq){
            if (i.second==1) return i.first;
        }
        return 0;
    }
};
