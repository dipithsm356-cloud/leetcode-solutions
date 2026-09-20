#include <stdio.h>

void moveZeroes(int nums[], int size)
{
    int i;
    int position = 0;
    int temp;

    for (i = 0; i < size; i++)
    {
        if (nums[i] != 0)
        {
            temp = nums[i];
            nums[i] = nums[position];
            nums[position] = temp;

            position++;
        }
    }
}

void printArray(int nums[], int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%d ", nums[i]);
    }

    printf("\n");
}

int main()
{
    /* Test Case 1 */
    int nums1[] = {0, 1, 0, 3, 12};

    printf("Test Case 1: ");
    moveZeroes(nums1, 5);
    printArray(nums1, 5);

    /* Test Case 2 - edge case */
    int nums2[] = {0, 0, 0};

    printf("Test Case 2: ");
    moveZeroes(nums2, 3);
    printArray(nums2, 3);

    return 0;
}