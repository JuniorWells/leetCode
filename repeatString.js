// Repeat string a number of times. Return an empty if num is not positive. Recursion solution

function repeatString(str, num) {
	return num < 1 ? "" : str.concat(repeatString(str, num - 1));
}
