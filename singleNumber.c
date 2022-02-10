// Given a non-empty array of integers nums, every element appears 
// twice except for one. Find that single one.
// You must implement a solution with a linear 
// runtime complexity and use only constant extra space.

int singleNumber(int* nums, int numsSize){

	int isDup = 0;

	for (int i = 0; i < numsSize; i++)
	{
		int j = 0;
		while (j < numsSize && isDup == 0)
		{
			if (nums[i] == nums[j] && i != j)
			isDup = 1;
			j++;
		}
		if (isDup == 0)
			return (nums[i]);
		isDup = 0;
	}
	return (0);
}