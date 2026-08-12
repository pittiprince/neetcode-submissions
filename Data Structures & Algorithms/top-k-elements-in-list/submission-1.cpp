class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> hash;
        // recored the freq
        for(auto i : nums){
            hash[i]++;
        }

        // to sort it over the freq -> convert into vector of pairs , first !
        vector<pair<int,int>> arr(hash.begin() , hash.end()) ;
        sort(arr.begin() , arr.end() , [](auto &a , auto &b){
            return a.second > b.second;
        });

        // now its sorted over freq - desc order 
        // and return the .first of pair in array acc to k 
        vector<int> result ;
        for(int i=0; i<k; i++){
            result.push_back(arr[i].first);
        }

        return result;
        
    }
};
