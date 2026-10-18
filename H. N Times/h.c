#include<stdio.h>

void printn(int n, char c)
{
    for(int i=1; i<=n; i++)
    {
        printf("%c ", c);
    }
}

int main()
{
    int t, n;
    char c;

    scanf("%d", &t);
    
    while(t--)
    {
        scanf("%d %c", &n, &c);

        printn(n, c);

        printf("\n");
    }

    return  0;
}