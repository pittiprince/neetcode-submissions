class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> hash;
        for(int val : nums){
            if(hash.find(val) != hash.end()){
                return true;
            }
            hash.insert(val);
        }
        return false;
    }
};