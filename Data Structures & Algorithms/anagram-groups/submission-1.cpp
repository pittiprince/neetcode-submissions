class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> hash;
        for(int i =0; i<strs.size(); i++){
            string val = strs[i];
            sort(val.begin() ,val.end());
            hash[val].push_back(strs[i]);
        }

        vector<vector<string>> result;
        for(auto pair : hash){
            result.push_back(pair.second);
        }

        return result;
    }
};
