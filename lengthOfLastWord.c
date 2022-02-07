// Given a string s consisting of some words separated by some number of spaces,
// return the length of the last word in the string.
//
//A word is a maximal substring consisting of non-space characters only.

#include <string.h>

int lengthOfLastWord(char * s){
	int i, len = 0;

	i = strlen(s) - 1;
	while (i >= 0 && s[i] == ' ')
		--i;
	while (i >= 0 && s[i] != ' '){
		--i;
		++len;
	}
	return (len);
}