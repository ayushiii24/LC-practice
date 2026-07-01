class Solution {
public:
    //APPROACH : boyer moore voting algo [optimised]
    // tc: O(n) , sc : O(1)
    vector<int> majorityElement(vector<int>& nums) {
        int m1=0; //majority 1
        int c1=0; //count of m1
        int m2=0; 
        int c2=0;

        for (int i=0;i<nums.size();i++){

            //got same element, so increase resp count
            if (m1 ==nums[i]) c1++;
            else if (m2 ==nums[i]) c2++;

            //empty so fill it with new elements
            else if (c1 == 0)  {m1=nums[i]; c1++;}
            else if (c2 == 0)  {m2=nums[i]; c2++;}

            else {c1--; c2--;} //if found another diff no., cancel each other out
        }
      
        vector <int> res;
        int freq1=0;
        int freq2=0;
        for (int n:nums){
            if (n==m1) freq1++;
            if (n==m2) freq2++;
        }
        //checking if they appear more than n/3 times
        if (freq1 > nums.size()/3) res.push_back(m1); 
        else if (freq2 > nums.size()/3) res.push_back(m2);

        return res;

    }
};
