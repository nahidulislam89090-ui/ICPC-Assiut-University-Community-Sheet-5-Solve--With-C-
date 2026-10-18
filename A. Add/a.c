#include<stdio.h>

long long sum (long long a, long long b)
{
    long long sum = a + b;
    return sum;
}

int main()
{
    long long x, y;

    scanf("%lld %lld", &x, &y);

    long long result = sum(x, y);

    printf("%lld", result);

    return 0;
}