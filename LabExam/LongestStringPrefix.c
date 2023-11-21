#include <stdio.h>

void longestPrefix(char string[10][100], int numStrings)
{
    char same[numStrings];

    for (int i = 1; i <= numStrings; i++)
    {
        same[i - 1] = string[i][0];
        for (int j = 1; j <= 100; j++)
        {
            if (string[j][i] == string[j - 1][i])
            {
                same[j] = string[j][i];
            }
            else
            {
                printf("There are no common prefixes. ");
                return 0;
            }
        }
    }
    printf("Longest Common Prefix: %s", same);
}
int main()
{
    int numString;
    printf("Please enter the number of strings: ");
    scanf("%d", &numString);
    char string[10][100];

    printf("Please enter the strings: \n");
    for (int i = 0; i < numString; i++)
    {
        printf("String %d: ", i);
        scanf("%s", &string[i]);
    }
    longestPrefix(string, numString);
}