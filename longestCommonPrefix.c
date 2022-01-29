// Write a function to find the longest common prefix string amongst an array of strings.
// If there is no common prefix, return an empty string "".

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*longestCommonPrefix(char ** strs, int strsSize)
{
	char *returnStr;
	int i, j = 0;
	int isMatching = 1;
	int min = strlen(strs[0]);

	if (strsSize == 1)
		return strs[0];
	for (int i = 0; i < strsSize; i++)
		if (strlen(strs[i]) < min)
			min = strlen(strs[i]);
	returnStr = calloc(min + 1, sizeof(char));
	while (j < min && isMatching)
	{
		i = 0;
		while (i < strsSize - 1)
		{
			if (strs[i][j] != strs[i + 1][j])
			{
			isMatching = 0;
			break;
			}
			i++;
		}
		if (isMatching == 1)
			returnStr[j] = strs[i - 1][j];
		j++;
	}
	if (!*returnStr)
		returnStr[0] = 0;
	return (returnStr);
}
