#include <stdio.h>
#include <string.h>

int isValid(char str[])
{
    char stack[10000];
    int top = -1;
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{')
        {
            top++;
            stack[top] = str[i];
        }
        else
        {
            if (top == -1)
                return 0;

            if ((str[i] == ')' && stack[top] != '(') ||
                (str[i] == ']' && stack[top] != '[') ||
                (str[i] == '}' && stack[top] != '{'))
            {
                return 0;
            }

            top--;
        }
    }

    return top == -1;
}

int main()
{
    /* Test Case 1 */
    char str1[] = "()[]{}";

    printf("Test Case 1: ");
    printf("%s\n", isValid(str1) ? "true" : "false");

    /* Test Case 2 - edge case */
    char str2[] = "(]";

    printf("Test Case 2: ");
    printf("%s\n", isValid(str2) ? "true" : "false");

    return 0;
}