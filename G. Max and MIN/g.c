#include<stdio.h>

void max_min(long long int n)
{
    long long a[100005];


    for(int i=0; i<n; i++)
    {
        scanf("%lld", &a[i]);
    }

    long long max, min;

    max = a[0];
    for(int i=1; i<n; i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
    }


    min=a[0];
    for(long long i=1; i<n; i++)
    {
        if(a[i]<min)
        {
            min = a[i];
        }
    }
    printf("%lld %lld", min, max);
}

int main()
{
    long long int n;

    scanf("%lld", &n);

    max_min(n);

    return 0;
}