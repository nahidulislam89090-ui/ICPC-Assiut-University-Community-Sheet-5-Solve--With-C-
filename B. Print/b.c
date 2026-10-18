#include<stdio.h>

int out (long long a)
{
    for(long long i=1; i<=a; i++)
    {
        if(i>1)
        {
            printf(" ");
        }
        
        printf("%lld", i);
    }
}

int main()
{
    long long n;

    scanf("%lld", &n);

    out(n);

    return 0;
}