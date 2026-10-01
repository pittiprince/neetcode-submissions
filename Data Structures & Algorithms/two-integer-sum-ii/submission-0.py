class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        d = {}
        result = []
        for idx , num in enumerate(numbers, start=1):
            req = target - num
            if req in d:
                result.append(d[req])
                result.append(idx)
                break
            d[num] = idx
        return result
        