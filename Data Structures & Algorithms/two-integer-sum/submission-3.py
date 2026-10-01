class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        d = {}
        result = []
        for i in range(len(nums)):
            req = target - nums[i]
            if req in d :
                result.append(d[req])
                result.append(i)
                break
            d[nums[i]] = i
        return result
            

        