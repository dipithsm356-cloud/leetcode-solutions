#include <stdio.h>
#include <string.h>

void longestCommonPrefix(char strs[][100], int size)
{
    int i, j;
    int length = strlen(strs[0]);

    for (i = 1; i < size; i++)
    {
        j = 0;

        while (j < length && strs[0][j] == strs[i][j])
        {
            j++;
        }

        length = j;
    }

    printf("Longest Common Prefix: ");

    for (i = 0; i < length; i++)
    {
        printf("%c", strs[0][i]);
    }

    printf("\n");
}

int main()
{
    /* Test Case 1 */
    char strs1[][100] = {"flower", "flow", "flight"};

    printf("Test Case 1: ");
    longestCommonPrefix(strs1, 3);

    /* Test Case 2 - edge case */
    char strs2[][100] = {"dog", "racecar", "car"};

    printf("Test Case 2: ");
    longestCommonPrefix(strs2, 3);

    return 0;
}