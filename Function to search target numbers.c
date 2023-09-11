#include <stdio.h>

int binarySearch(int nums[], int target, int left, int right) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1; // Target not found
}

int search(int nums[], int numsSize, int target) {
    return binarySearch(nums, target, 0, numsSize - 1);
}

int main() {
    int nums[] = {1, 2, 3, 4, 5, 6, 7};
    int target = 4;
    int result = search(nums, 7, target);
    
    if (result != -1) {
        printf("Target %d found at index %d\n", target, result);
    } else {
        printf("Target %d not found in the array\n", target);
    }

    return 0;
}
