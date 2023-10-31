/* Lab 5 P3: starter code to complete*/
#include <stdio.h>
#include <string.h>

int main()
{
    char input[256];
    int letterCount[26] = {0}; // Array to store the count of each letter initialized to zeros
    int i = 0;

    printf("Enter text strings (press Enter on an empty line to exit):\n");

    while (1)
    {

        fgets(input, sizeof(input), stdin); // get the input from the user via keyboard

        // Check for an empty line to exit the loop
        if (strlen(input) == 1 && input[0] == '\n')
        {
            break;
        }

        for (int k = 0; k < strlen(input) - 1; k++)
        {
            if (input[k] >= 'A' && input[k] <= 'Z')
            {
                letterCount[(int)input[k] - 65]++;
            }
            if (input[k] >= 'a' && input[k] <= 'z')
            {
                letterCount[(int)input[k] - 97]++;
            }
        }
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%c: %d | ", (char)('A' + i), letterCount[i]);
    }

    // More of your code here to
    // Display the letter counts

    return 0;
}