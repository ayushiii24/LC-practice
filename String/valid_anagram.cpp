//Problem=1 [valid anagram]
class Solution {
public:
    // approach : sort and compare (brute force)
    // Time complexity: O(n log n) 
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if (s==t) return true;
        return false;
    }

    //approach : hash map optimised
    //time complexity : o(n)
    bool isAnagram(string s, string t) {
       unordered_map <char, int> freq;
        for (char c : s){
            freq[c]++;
        }
        for (char c : t){
            freq[c]--;
        }
        for (auto i : freq){
            if (i.second!=0) return false;
        }
       return true;
    }
};
