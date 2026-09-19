#include <stdio.h>
#include <string.h>

void reverseString(char str[])
{
    int left = 0;
    int right = strlen(str) - 1;
    char temp;

    while (left < right)
    {
        temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }
}

int main()
{
    /* Test Case 1 */
    char str1[] = "hello";

    printf("Test Case 1: ");
    reverseString(str1);
    printf("%s\n", str1);

    /* Test Case 2 - edge case */
    char str2[] = "";

    printf("Test Case 2: ");
    reverseString(str2);
    printf("%s\n", str2);

    return 0;
}