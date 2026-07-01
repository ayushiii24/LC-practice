class Solution {
public:
    //APPROACH : hash map (brute force)
    //tc : O(n) , sc : O(n)
    int majorityElement(vector<int>& nums) {
        int found=0;
        unordered_map <int,int> freq;
        for (int i : nums){
            freq[i]++;
        }
        for (auto i : freq){
            if (i.second > nums.size()/2) {found=i.first; return found;}
        }
        return found;
    }

    //APPROACH : boyer voting algo/candidate approach (optimized)
    //tc : O(n) , sc: O(1)
    int majorityElement(vector<int>& nums) {
        int count=0; //count of the curr candidate
        int candidate=0; //element we currently assume is majority
        for (int i=0;i<nums.size();i++){
            if (count==0){ //means prev element was canceled out
                candidate=nums[i]; //making curr element new cand. now
                count++;           
            }
            else if (candidate==nums[i]) count++;
            else count--; //if curr element != curr candidate,minority element canceled out
        }
        return candidate;
    }
};
