#include <stdio.h>

int bin(long long int x, int bits[])
{
    int len = 0;

    while (x > 0)
    {
        bits[len++] = x % 2;
        x = x / 2;
    }

    return len;
}

int ans(int bits[], int len)
{
    for (int i = 0; i < len / 2; i++)
    {
        if (bits[i] != bits[len - 1 - i])
            return 0;
    }

    return 1;
}

int main()
{
    long long int n;
    scanf("%lld", &n);

    int bits[64];
    int len = bin(n, bits);

    if (n % 2 == 1 && ans(bits, len))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}