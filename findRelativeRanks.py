# You are given an integer array score of size n, where score[i] is the score of the ith athlete in a competition. 
# All the scores are guaranteed to be unique.
# The athletes are placed based on their scores, where the 1st place athlete has the highest score, 
# the 2nd place athlete has the 2nd highest score, and so on. 

# The placement of each athlete determines their rank:
# The 1st place athlete's rank is "Gold Medal".
# The 2nd place athlete's rank is "Silver Medal".
# The 3rd place athlete's rank is "Bronze Medal".
# For the 4th place to the nth place athlete, 
# their rank is their placement number (i.e., the xth place athlete's rank is "x").

# Return an array answer of size n where answer[i] is the rank of the ith athlete.

class Solution:
	def findRelativeRanks(self, score: List[int]) -> List[str]:
		cpy = [i for i in score]
		cpy.sort(reverse=True)
		answer = [i for i in score]
		for i in range(len(answer)):
			for j in range(len(cpy)):
				if (answer[i] == cpy[j]):
					if j == 0:
						answer[i] = "Gold Medal"
					elif j == 1:
						answer[i] = "Silver Medal"
					elif j == 2:
						answer[i] = "Bronze Medal"
					else:
						answer[i] = str(j + 1)
					break
		return answer