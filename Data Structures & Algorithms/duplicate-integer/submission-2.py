class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        hash = {}
        for i in nums:
            hash[i] = hash.get(i , 0)+1
        for i in hash:
            if hash[i] >= 2:
                return True
        return False
        