class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix(nums.size());
        vector<int> suffix(nums.size());
        vector<int> result(nums.size());

        //find prefix - product of everything LEFT
        int pre = 1;
        for(int i=0; i<nums.size(); i++){
            prefix[i] = pre;
            pre *= nums[i];
        }

        //find suffix - product of everything RIGHT
        int suf = 1;
        for(int i= nums.size()-1; i>=0; i--){
            suffix[i] = suf;
            suf *= nums[i];
        }

        //result
        for(int i=0; i<nums.size(); i++){
            result[i] = prefix[i] * suffix[i];
        }

        return result;
    }
};
