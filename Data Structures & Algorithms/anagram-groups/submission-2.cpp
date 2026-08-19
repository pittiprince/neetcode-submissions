class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> anagram;
        for(int i=0; i<strs.size(); i++){
            string word = strs[i];
            sort(word.begin(),word.end());
            anagram[word].push_back(strs[i]);
        }
        
        vector<vector<string>> result;
        for(auto& i : anagram){
            result.push_back(i.second);
        }

        return result;
    }
};
