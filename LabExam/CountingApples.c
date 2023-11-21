#include <stdio.h>
int largestApples(int child, int extApples, int countApples, int totalArr[])
{
    int maximum = 0;
    int total;
    for (int i = 1; i <= child; i++)
    {
        if (totalArr[i] > maximum)
        {
            maximum = totalArr[i];
        }
    }
    total = countApples + extApples;
    if (total >= maximum)
    {
        printf("YES, the greatest");
    }
    else
    {
        printf("NO, not the greatest");
    }
}

int main()
{
    int numChild;
    printf("Please enter the number of Children: ");
    scanf("%d", &numChild);
    int applesCount[numChild], extraApples;
    printf("Please enter how many apples each Child has: \n");
    for (int i = 0; i < numChild; i++)
    {
        printf("Child #%d: ", i);
        scanf("%d", &applesCount[i]);
    }
    printf("Please enter # of extra apples: ");
    scanf("%d", &extraApples);

    for (int i = 0; i < numChild; i++)
    {
        printf("Child %d would have %d + %d = %d - ", i, applesCount[i], extraApples, applesCount[i] + extraApples);
        largestApples(numChild, extraApples, applesCount[i], applesCount);
        printf("\n");
    }
}