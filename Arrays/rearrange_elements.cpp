//problem : 2148. Rearrange Array Elements by Sign
class Solution {
public:
    //APPROACH : two vector (brute force)
    // tc : O(n) , sc : O(n)
    vector<int> rearrangeArray(vector<int>& nums) {
        vector <int> pos;
        vector <int> neg;
        vector <int> res;
        for (int i : nums){
            if (i < 0) neg.push_back(i);
            else pos.push_back(i);
        }
         for (int i=0 ; i< pos.size() ; i++){
            res.push_back(pos[i]);
            res.push_back(neg[i]);
        }
        return res;

    //APPROACH : index placement using 2 pointers (optimized)
    // tc : O(n) , sc : O(n)
    vector<int> rearrangeArray(vector<int>& nums) {
        vector <int> res(nums.size());
        int posX = 0; //pos no. at even indices
        int negX = 1; //neg at odd 
        for (int i=0 ; i<nums.size(); i++){
            if (nums[i]<0){
                res[negX]=nums[i];
                negX = negX+2; //moving to next odd index
            }
            else{ 
                res[posX]=nums[i];
                posX = posX+2; //to next even index
            }
        }
        return res;
    }
};
