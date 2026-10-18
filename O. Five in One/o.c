#include<stdio.h>

void max (int n,int a[])
{
    int max = a[0];

    for(int i=1; i<n; i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
    }

    printf("The maximum number : %d\n", max);
}

void min (int n, int a[])
{
    int min = a[0];

    for(int i=1; i<n; i++)
    {
        if(a[i]<min)
        {
            min = a[i];
        }
    }

    printf("The minimum number : %d\n", min);
}

void prime (int n, int a[])
{
    int count = 0;

    for(int i=0; i<n; i++)
    {
        int flag = 1;

        if(a[i]<2)
        {
            flag = 0;
        }

        for(int j=2; j*j<=a[i]; j++)
        {
            if(a[i]%j==0)
            {
                flag = 0;
                break;
            }
        }

        if(flag==1)
        {
            count++;
        }
    }

    printf("The number of prime numbers : %d\n", count);
}

void palindrome (int n, int a[])
{
    int count = 0;

    for(int i=0; i<n; i++)
    {
        int x = a[i];
        int rev = 0;

        while(x>0)
        {
            rev = rev*10 + x%10;
            x = x/10;
        }

        if(a[i]==rev)
        {
            count++;
        }
    }

    printf("The number of palindrome numbers : %d\n", count);
}

void divisor (int n, int a[])
{
    int number = a[0];
    int maxDivisors = 0;

    for(int i=0; i<n; i++)
    {
        int count = 0;

        for(int j=1; j<=a[i]; j++)
        {
            if(a[i]%j==0)
            {
                count++;
            }
        }

        if(count>maxDivisors || (count==maxDivisors && a[i]>number))
        {
            maxDivisors = count;
            number = a[i];
        }
    }

    printf("The number that has the maximum number of divisors : %d\n", number);
}

int main()
{
    int n, a[105];

    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    max(n, a);
    min(n, a);
    prime(n, a);
    palindrome(n, a);
    divisor(n, a);

    return 0;
}