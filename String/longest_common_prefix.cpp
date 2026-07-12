//PROBLEM : 14. Longest Common Prefix
class Solution {
public:
    //APPROACH : horizontal scanning (brute force)
    //tc : O(n*m) , sc: O)1)
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        if (strs.empty()) return "";
        string prefix = strs[0]; 
        for (int i=1; i<strs.size(); i++) {
            //while the curr string doesnt start with the prefix
            //(find(prefix) != 0 means it either doesnt exist or isnt at index 0
            while (strs[i].find(prefix) != 0) {
                prefix = prefix.substr(0, prefix.length() - 1); //remove last ch of the prefix
                if (prefix.empty()) return ""; //if becomes empty, no common prefix
            }
        }
        return prefix;
    }
};
