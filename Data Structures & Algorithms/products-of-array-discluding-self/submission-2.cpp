class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // prefix of the array -> prefix Array
        // suffix of the array -> suffix Array
        // result[i] = suffix[i] * prefix[i] -> result array

        //*********prefix array*********
        vector<int> prefixArr(nums.size());
        int prefix = 1;
        for(int i = 0; i<nums.size(); i++){
            prefixArr[i] = prefix;
            prefix *= nums[i];
        }


        //*******Suffix Array*********
        vector<int> suffixArr(nums.size());
        int suffix = 1;
        for(int i = nums.size() - 1; i >= 0; i-- ){
            suffixArr[i] = suffix;
            suffix *= nums[i];
        }

        vector<int> result(nums.size());
        for(int i = 0; i<nums.size(); i++){
            result[i] = prefixArr[i] * suffixArr[i];
        }

        return result;
    }
};
