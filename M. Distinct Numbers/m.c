
#include<stdio.h>

void distinct(long long n, int a[])
{
    int count = 0;

    for(long long i = 0; i < n; i++)
    {
        int flag = 0;

        for(long long j = 0; j < i; j++)
        {
            if(a[i] == a[j])
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            count++;
        }
    }

    printf("%d", count);
}

int main()
{
    long long n;
    int a[1005];

    scanf("%lld", &n);

    for(long long i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    distinct(n, a);

    return 0;
}
