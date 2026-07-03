//PROBLEM : implement upper bound
class Solution {
  public:
  //tc: O(log n), sc : O(n)
    int upperBound(vector<int>& arr, int target) {
        int n=arr.size();
        int s=0; 
        int e=n-1; 
        while(s<=e){
            int mid=s+(e-s)/2;
            if (arr[mid]> target) e=mid-1; //potential upper bound. check in the left half for smaller valid index
            else s=mid+1; //cant be the upper bound. look in the right half.
        }
        return s; //when the loop ends. s will point to the smallest no
    }
};
