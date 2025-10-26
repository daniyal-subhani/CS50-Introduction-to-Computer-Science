#include <stdio.h>

int main() {
    int nums[3];
    for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++)
    { 
        /* code */
        printf("Enter a number: ");
        scanf("%d", &nums[i]);
    }
  for (int j = 0; j < sizeof(nums) / sizeof(nums[0]); j++)
  {
    /* code */
    printf("You entered: %d\n", nums[j]);
  }
  
    
    return 0;
}