/**
 * This is specifically used to test sample code from questions.
 * This will change multiple times in a day potentially and is
 * designed to be useful, aside from testing purposes.
 */

#include <stdio.h>
long sum(long *, int);
int main(void)
{
    long primes[6] = {1, 2, 3, 5, 7, 11};
    printf("%li\n", sum(primes, 6));
    return 0;
}
long sum(long *p, int sz)
{
    long *end = p + sz;
    long total = 0;
    while (p < end)
        total += *p++;
    return total;
}
