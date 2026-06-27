// problem : Second Largest element in the array
class Solution {
  public:
    // APPROACH : two passes
    // TC : O(n), SC : O(1)
    int getSecondLargest(vector<int> &arr) {
        int maxi=INT_MIN;
        int sec = INT_MIN;
        for (int i=0;i<arr.size();i++){
            if (arr[i]>maxi) maxi=arr[i];
        }
        for (int j=0 ; j<arr.size();j++){
                if (sec<arr[j] && arr[j]!=maxi){
                    sec=arr[j];
                }
            }
        return (sec==INT_MIN) ? -1 : sec;  //if no sec max/ all elements same return -1, else sec
    } 

    //APPROACH : one pass 
    // TC : O(n), SC : O(1)
    int getSecondLargest(vector<int> &arr) {
        int maxi=INT_MIN;
        int sec = INT_MIN;
        for (int i=0;i<arr.size();i++){
            if (arr[i]>maxi) {sec = maxi; maxi=arr[i];} //the prev max becomes second max
            else if (sec<arr[i] && arr[i]!=maxi){
                    sec=arr[i];
                }
        }
        return (sec==INT_MIN) ? -1 : sec;  
    } 
};
