//PROBLEM : 3536. Maximum Product of Two Digits
class Solution {
public:
 /*   approach : checking every pair (brute force)
      tc : O(d^2)  , sc : O(d)
      int maxProduct(int n) {
          string s = to_string(n);
          int maxp=0;
          for (int i=0 ; i<s.size();i++){
              for (int j=i+1; j<s.size();j++){
                  int d1 = s[i]-'0';
                  int d2 = s[j]-'0';
                  int prod = d1*d2;
                  maxp = max(prod,maxp);
            }
        }
      return maxp;
    }
  */
    // approach : single-pass tracking (optimised)
    //tc : O(d) , sc : O(d) [d = no of digits in n]
    int maxProduct(int n) {
        string s = to_string(n);
        int m1=0; //max
        int m2=0; //sec max
        for (int i=0 ; i<s.size() ; i++){
            int digit = s[i]-'0';
            if (digit >= m1){
                m2=m1; //old max1 given to max2
                m1=digit; //new max digit assignmed to max1 now
            }
            else if (digit > m2){
                m2=digit; //update sec max
            }
        }
        return m1*m2;
    }
};
