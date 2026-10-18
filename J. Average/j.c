
#include <stdio.h>

double average(int n)
{
    double x, sum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &x);
        sum += x;
    }

    return sum / n;
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%.7f\n", average(n));

    return 0;
}
