// problem : sort colors

class Solution {
public:
    // APPROACH  : counting nums and overwriting the arr 
    // time complexity : O(n), space complexity : O(1)
    void sortColors(vector<int>& arr) {
        int count0=0;
        int count1=0;
        int count2=0;
        for (int a : arr){
            if (a==0) count0++;
            if (a==1) count1++;
            if (a==2) count2++;
        }

        int i=0 ; 
        while (count0 > 0){
            arr[i]=0; //putting 0 into the curr position of arr
            i++; //moving index to the next position
            count0--; //reduce the no of 0s left to place
        }
        while (count1 > 0){
            arr[i]=1;
            i++;
            count1--;
        }
        while (count2 > 0){
            arr[i]=2;
            i++;
            count2--;
        }

    //APPROACH : dns algo (3 pointers)
    // time complecity : O(n), space complexity : O(1)
      
    void sortColors(vector<int>& arr) {
        int low=0; //to track the boundary for the next 0
        int high=arr.size()-1; //to track the boundary for next 2
        int mid=0; //to traverse the arr

        while(mid<=high){
            if (arr[mid]==0){
                swap(arr[mid],arr[low]); 
                low++;
                mid++;
            }
            else if (arr[mid]==1){
                mid++; //1 is trapped in middle, no swappimg needed
            }
            else if (arr[mid]==2){
                swap(arr[mid],arr[high]);
                high--; 
                //dont increment mid here, need to check the newly swapped element
              
            }
        }
    }
};
