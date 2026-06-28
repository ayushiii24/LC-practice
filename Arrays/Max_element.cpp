// problem : maximum element after decrementing and rearranging
class Solution {
public:
    //APPROACH : sorting and greedy linear scan
    // TC : O(n log n) , SC : O(1)
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        if (arr[0]!=1) arr[0]=1; 
        for (int i=1;i<arr.size();i++){
            if (abs(arr[i]-arr[i-1] )> 1){ //if the given condition isnt met
                arr[i]= arr[i-1]+1;
            }   
        }
        return arr[arr.size()-1];
    }
};
