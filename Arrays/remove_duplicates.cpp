//problem : 26 Remove Duplicates from Sorted Array
class Solution {
public:
    //approach : using temp vector (brute force) 
    //tc : O(n) , sc : O(n)
    int removeDuplicates(vector<int>& arr) {
        vector<int> v;
        v.push_back(arr[0]); 
        for (int i = 1; i < arr.size(); i++) {
            //compare curr element with the last element added to v
            if (arr[i] != v.back()) v.push_back(arr[i]);
        }
        //copying the unique elements back into orig arr
        for (int i=0; i < v.size(); i++) {
            arr[i] = v[i];
        }
        return v.size(); //count of unique elements


    //approach : two pointer
    //tc : O(n) , sc : O(1)
    int removeDuplicates(vector<int>& nums) {
        int j=0; //index of the last known unique element
        for (int i=0; i < nums.size() ; i++){
            if (nums[i] != nums[j]){ 
                j++;
                nums[j] = nums[i];  //new unique value at i
            }
        }
        return j+1; //(j is 0 indexed, thats why j+1)
    }
};
