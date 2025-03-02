//Leetcode Problem 26: Remove Duplicates from Sorted Array

int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) return 0;

    int k = 1; //first element is always unique
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[k - 1]) { //if current element is not equal to the previous element then it is unique since the array is sorted
            nums[k] = nums[i]; //adding the unique element as next element
            k++; 
        }
    }
    return k; 
}
