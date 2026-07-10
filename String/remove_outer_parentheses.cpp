//PROBLEM : 1021. Remove Outermost Parentheses
class Solution {
public:
    //APPROACH : depth counter method (optimised)
    //tc : O(n) , sc: O(1)
    string removeOuterParentheses(string s) {
        int depth=0;
        string res="";
        for (char c:s){
            if (c == '('){
                //if depth>0, this ( is not the outermost one, keep it
                if (depth>0) {res=res+c;} 
                depth++;
            }
            else if (c==')'){
                depth--; //moving up one level first
                //if depth>0 after moving up, this ) isnt the outermost,keep it
                if (depth>0) {res=res+c;}
            }
        }
        return res;
    }
};
