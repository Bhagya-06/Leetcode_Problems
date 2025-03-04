int* pivotArray(int* nums, int numsSize, int pivot, int* returnSize) {
    int* result = (int*)malloc(numsSize * sizeof(int)); // Use malloc to dynamically allocate memory
    int index = 0;
// First append elements smaller than pivot
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] < pivot) {
            result[index++] = nums[i];
        }
    }
// Next append middle element
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == pivot) {
            result[index++] = nums[i];
        }
    }
// Then append elements larger than pivot
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > pivot) {
            result[index++] = nums[i];
        }
    }

    *returnSize = numsSize; // let C know the size of returned array
    return result;
}
