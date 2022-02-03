# Given an integer array nums, 
# find the contiguous subarray (containing at least one number) 
# which has the largest sum and return its sum.
#
# A subarray is a contiguous part of an array.

class Solution:
	def maxSubArray(self, nums: List[int]) -> int:
		dl = [*nums]
		for i in range(1, len(nums)):
			dl[i] = max(nums[i], nums[i] + dl[i - 1])
		return max(dl)