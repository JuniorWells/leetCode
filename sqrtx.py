# Given a non-negative integer x, 
# compute and return the square root of x.
# Since the return type is an integer, the decimal digits are truncated, 
# and only the integer part of the result is returned.
# Note: You are not allowed to use any built-in exponent function or operator,
# such as pow(x, 0.5) or x ** 0.5.

class Solution:
	def mySqrt(self, x: int) -> int:
		if x <= 0: return 0
		if x == 1: return 1
		i = 2
		while (i * i < x):
			i += 1
		if (i * i > x):
			return i - 1
		return i