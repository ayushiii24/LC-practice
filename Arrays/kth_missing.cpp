//problem : Kth Missing Positive Number
class Solution {
public:
  // approach : Linear scan using two pointers (brute force)
  // Time Complexity: O(n+k) , space complexity : O(k)
    int findKthPositive(vector<int>& arr, int k) {
        vector <int> v;
        int i=1;
        int curr=0;
        while(v.size()<k){
            if (curr >= arr.size() || i!=arr[curr]) {
                v.push_back(i); 
                i++;
            }
            else {curr++; i++;}
        }
        return v[k-1];
    }
};
