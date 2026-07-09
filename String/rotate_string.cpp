//PROBLEM : 796. Rotate String
class Solution {
public:
    //APPROACH : string simulation (brute force)
    //tc : O(n^2) sc : O(1)
    bool rotateString(string s, string goal) {
        if (s.size()!=goal.size()) return false;
        int n=s.size();
        for (int r=0;r<n;r++){
            if (s==goal) return true; //checking if the curr rotation matches the goal
            int first=s[0];
            for (int i=0 ; i<n-1;i++){
                s[i]= s[i+1]; //shifting char by one pos
            }
            s[n-1]=first;
        }
        return false;

    //APPROACH : concatenation (optimized)
    //tc : O(n) ,sc : O(n)
    bool rotateString(string s, string goal) {
        if (s.size()!=goal.size()) return false;
        string new_s = s+s; //contains every possible rotation of s
        bool found = new_s.find(goal) != string::npos; //string::npos is returned if the substring is not found
        return found;

    }
};
