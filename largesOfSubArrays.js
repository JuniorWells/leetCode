// Return an array of the largest number from each provided sub-array.

function largestOfSubArrays(arr, final = []) {
	return !arr.length
		? final
		: largestOfSubArrays(arr.slice(1), final.concat(Math.max(...arr[0])))
}
