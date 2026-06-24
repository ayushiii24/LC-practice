class Solution {
public:
    //approach : linear scan tracking current and maximum count
    //time complexity : O(n) , space complexity : O(1)
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count=0;
        int temp=0;
        for (int i=0;i<n;i++){
            if (nums[i]==1) {
                count++;
                if (temp<count)temp=count;
            }
            else count=0; //reset count
        }
        return temp;
    }
};
