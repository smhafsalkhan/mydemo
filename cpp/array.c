#include <stdio.h>

int main() {
    int nums[] = {2, 7, 11, 15};   // example input
    int target = 13;
    int n = sizeof(nums) / sizeof(nums[0]);
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("[%d, %d]\n", i, j);
             return 0;
            }
        }
    }

    printf("No solution found\n");
  return 0;
}