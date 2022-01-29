# Given an integer x, return true if x is palindrome integer.

# An integer is a palindrome when it reads the same backward as forward.

class Solution:
	def isPalindrome(self, x: int) -> bool:
		s = str(x)
		s1 = ["" for i in range(len(s))]
		s2 = ["" for i in range(len(s))]
		i = len(s) - 1
		j = 0
		while (i >= 0):
			s1[j] = s[i]
			j += 1
			i -= 1
		i = 0
		while (i < len(s)):
			s2[i] = s[i]
			i += 1
		if s1 == s2:
			return True
		else:
			return False