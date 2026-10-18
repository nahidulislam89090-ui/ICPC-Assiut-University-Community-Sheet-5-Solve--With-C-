#include<stdio.h>

void swap(long long *x, long long *y)
{
    long long temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    long long a, b;
    scanf("%lld %lld", &a, &b);

    swap(&a, &b);

    printf("%lld %lld", a, b);

    return 0;
}