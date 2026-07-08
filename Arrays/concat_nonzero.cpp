//PROBLEM : Concatenate Non-Zero Digits and Multiply by Sum I
class Solution {
public:
    //APPROACH :string conversion
    //tc: O(n) , sc : O(n)
    long long sumAndMultiply(int n) {
        string s = to_string(n);
        int sum=0;
        long long x=0;
        for (char c : s){
            int digit = c-'0'; //convrrt char into no.
            sum += digit;
            if (digit!=0) x=x*10+digit; //to combine digits into a single no.
        }
        return x*sum;
    }
};
