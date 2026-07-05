//problem :  Largest Odd Number in String
class Solution {
public:
    //APPROACH : greedy approach 
    // tc : O(n) , oc : O(1)
    string largestOddNumber(string nums) {
        int n=nums.size();
        string l="";
        for (int i=n-1 ; i>=0 ;i--){
            if(nums[i]%2!=0){
                return nums.substr(0,i+1);
            }
        }
        return l;
    }
};
