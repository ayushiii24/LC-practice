//Problem 1 [Two Sum]

class Solution {
public:
    //Time Complexity: O(n²)
    //approach : two nested loops (brute force)
    vector<int> twoSum(vector<int>& nums, int target) {
        int n =nums.size();
        for (int i=0;i<n;i++){
            for (int j = i+1;j<n;j++){
                if (nums[i] +nums[j]==target){
                    return {i,j};
                } 
            }
        } 
    return {};  
    }  

    //time complexity : O(n)
    //approach : hashmap optimised
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        for ( int i=0 ;i <nums.size();i++){
            int req = target - nums[i];

            if (map.find(req) != map.end()) return {map[req],i};
            map[nums[i]]=i;  
        }
        return {};
    }
};

