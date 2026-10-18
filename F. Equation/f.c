#include<stdio.h>

long long power(int x, int n)
{
    long long result =1;

    for(int i=1; i<=n; i++)
    {
        result = result*x;
    }

    return result;
}

int main()
{
    int x, n;

    scanf("%d %d", &x, &n);

    long long sum=0;

    for(int i=2; i<=n; i+=2)
    {
        sum = sum + power(x, i);
    }

    printf("%lld\n", sum);

    return 0;
}