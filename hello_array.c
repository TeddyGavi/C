#include <stdio.h>

int main(void) {
  int nums[] = {1, 2, 3, 4, 5};
  int i;
  int length;
  printf("%d\n", nums[2]);

  for (i = 0; i <= 4; i++) {
    printf("%d\n", nums[i]);
  }

  length = sizeof(nums) / sizeof(nums[0]);

  printf("the length is: %d \n", length);

  printf("This is a loop using the size of the array \n");

  for (i = 0; i < length; i++) {
    printf("num is %d, index is %i \n", nums[i], i);
  }

  printf("%p pointer, %d length \n", &nums, length);
}
