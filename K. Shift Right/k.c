
#include<stdio.h>

void shift(int a[100005], long long x, long long n)
{
    x = x % n;

    for(long long i = 0; i < x; i++)
    {
        int temp = a[n-1];

        for(long long j = n-1; j > 0; j--)
        {
            a[j] = a[j-1];
        }

        a[0] = temp;
    }

    for(long long i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    long long n, x;
    scanf("%lld %lld", &n, &x);

    int a[100005];

    for(long long i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    shift(a, x, n);

    return 0;
}
