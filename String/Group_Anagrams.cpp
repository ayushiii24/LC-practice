// problem : Group Anagrams
class Solution {
public:
    // approach : sorting
    // time complexity : O( n*k log k)
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string,vector<string>> map;
        for (int i=0;i<strs.size();i++){
            string temp= strs[i];
            sort(temp.begin(),temp.end());
            map[temp].push_back(strs[i]);
        }
        for (auto i : map){
            result.push_back(i.second);
        }
        return result;
    }
};

