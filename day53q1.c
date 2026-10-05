// Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.

#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("-1\n");
        return 0;
    }

    int nums[n];
    int total_sum = 0;

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        total_sum += nums[i];
    }

    int left_sum = 0;
    int pivot = -1;

    for (int i = 0; i < n; i++) {
        int right_sum = total_sum - left_sum - nums[i];
        if (left_sum == right_sum) {
            pivot = i;
            break;
        }
        left_sum += nums[i];
    }

    printf("%d\n", pivot);

    return 0;
}
