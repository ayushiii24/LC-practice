//PROBLEM : LC 1967. Number of Strings That Appear as Substrings in Word
class Solution {
public: 
    //APPROACH : loop and find
    //tc : O(n*m), sc : O(1)
    int numOfStrings(vector<string>& patterns, string word) {
        int count=0;
        for (int i=0 ;i<patterns.size();i++){
            int pos = word.find(patterns[i]); //search for substring inside word
            if (pos != string::npos) count++; //if the substring is found, npos = not position/ not found
        }
        return count;
    }
};
