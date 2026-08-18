class Solution {
public:
    bool isAnagram(string s, string t) {
       unordered_map<char,int> hash_s;
       unordered_map<char,int> hash_t;
       for(auto i : s){
        hash_s[i]++;
       }

       for(auto j : t){
        hash_t[j]++;
       }

       return hash_s == hash_t;
    }
};
