#include<stdio.h>

void new(int a[], int b[], long long n)
{
    for(long long i=0; i<n; i++)
    {
        printf("%d ", b[i]);
    }
    for(long long i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    long long n;
    scanf("%lld", &n);

    int a[100005];
    int b[100005];

    for(long long i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(long long i=0; i<n; i++)
    {
        scanf("%d", &b[i]);
    }

    new(a, b, n);

    return 0;
}