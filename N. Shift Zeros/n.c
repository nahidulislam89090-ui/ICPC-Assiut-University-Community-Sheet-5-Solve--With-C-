#include<stdio.h>

void shift (long long n, int a[])
{
    long long j=0;

    for(long long i=0; i<n; i++)
    {
        
        if(a[i] != 0)
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;

            j++;
        }
    }

    for(long long i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    long long n;
    int a[1005];

    scanf("%lld", &n);

    for(long long i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    shift(n, a);

    return 0;
}