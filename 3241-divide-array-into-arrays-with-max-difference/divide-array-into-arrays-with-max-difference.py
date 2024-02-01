class Solution:
    def divideArray(self, nums: List[int], k: int) -> List[List[int]]:
        nums.sort()
        i=0
        res=[]
        while i+2<len(nums):
            if nums[i+2]-nums[i]>k: 
                return []
            
            res.append([nums[i], nums[i+1], nums[i+2]])
            i+=3
        return res