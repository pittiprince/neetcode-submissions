class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }

        unordered_map<char,int> hashS;
        unordered_map<char,int> hashT;

        for(auto i:s){
            hashS[i]++;
        }

        for(auto j:t){
            hashT[j]++;
        }

        return hashS==hashT;
        return false;
    }
};
