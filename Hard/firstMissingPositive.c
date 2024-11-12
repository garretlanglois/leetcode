#include <stdio.h>

int firstMissingPositive(int* nums, int numsSize) {

    int value = 1;
    int dummyValue = 1;

    for (int i = 0; i < numsSize; i++) {

        if (nums[i] == dummyValue) {
            dummyValue = value + nums[i];
        }
    }

    return dummyValue; 
}

//Main function to test code: 

int main() {
    // Test case 1: Positive numbers starting from 1
    int nums1[] = {1, 2, 0};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("First missing positive in test case 1: %d\n", firstMissingPositive(nums1, size1));

    // Test case 2: Mixed positive and negative numbers
    int nums2[] = {3, 4, -1, 1};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("First missing positive in test case 2: %d\n", firstMissingPositive(nums2, size2));

    // Test case 3: Consecutive positive numbers
    int nums3[] = {7, 8, 9, 11, 12};
    int size3 = sizeof(nums3) / sizeof(nums3[0]);
    printf("First missing positive in test case 3: %d\n", firstMissingPositive(nums3, size3));

    // Test case 4: Only negative numbers
    int nums4[] = {-1, -2, -3};
    int size4 = sizeof(nums4) / sizeof(nums4[0]);
    printf("First missing positive in test case 4: %d\n", firstMissingPositive(nums4, size4));

    // Test case 5: Empty array
    int nums5[] = {};
    int size5 = sizeof(nums5) / sizeof(nums5[0]);
    printf("First missing positive in test case 5: %d\n", firstMissingPositive(nums5, size5));

    return 0;
}