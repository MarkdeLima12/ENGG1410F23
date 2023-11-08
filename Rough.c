/**
 * This is specifically used to test sample code from questions.
 * This will change multiple times in a day potentially and is
 * designed to be useful, aside from testing purposes.
 */

#include <stdio.h>

int main()
{
    long v[6] = {1, 2, 3, 4, 5, 6};
    long *p;
    p = v;
    printf("%ld\n", *p++);
    p++;
    printf("%ld\n", *p);
    p += 2;
    printf("%ld\n", *p);
}