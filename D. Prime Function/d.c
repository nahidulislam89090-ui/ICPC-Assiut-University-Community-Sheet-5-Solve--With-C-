#include<stdio.h>

long long int prime (long long int x)
{
    int prime = 1;

    if(x<=1)
    {
        prime = 0;
    }
    else
    {
        for(long long int i=2; i*i <=x; i++)
        {
            if(x%i==0)
            {
                prime = 0;
            }
        }
    }

    if (prime == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}

int main()
{
    long long int t;
    scanf("%lld", &t);

    while(t--)
    {
        long long int n;
        scanf("%lld", &n);

        prime(n);
    }

    return 0;
}