class Solution:
    def maximizeSum(self, nums: List[int], k: int) -> int:
        max=nums[0]
        for i in range(len(nums)):
            if(nums[i]>max):
                max=nums[i]
        s=0
        for i in range(k) :
            s+=max+i
        return s

        
        
            

        