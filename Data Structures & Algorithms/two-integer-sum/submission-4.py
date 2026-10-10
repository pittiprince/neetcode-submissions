class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        temp = {}
        result = []
        for i in range(len(nums)):
            res = target - nums[i]
            if res in temp:
                result.append(temp[res])
                result.append(i)
            else:
                temp[nums[i]] = i
        return result
        