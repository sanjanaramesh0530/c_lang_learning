#include <stdio.h>

double fact(int i)
{
    int j;
    double result = 1;

    for (j = 1; j <= i; j++)
    {
        result = result * j;
    }

    return result;
}

double power(double x, int i)
{
    double result = 1;
    int j;

    for (j = 1; j <= i; j++)
    {
        result = result * x;
    }

    return result;
}

int main()
{
    int sign = 1;
    int i;
    int n;
    double x;
    double sinx;

    printf("Enter the value of x in radians: ");
    scanf("%lf", &x);

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    sinx = 0;

    for (i = 1; i <= 2 * n - 1; i = i + 2)
    {
        sinx = sinx + sign * (power(x, i) / fact(i));

        sign = -sign;
    }

    printf("sin(%.2lf) = %.6lf", x, sinx);

    return 0;
}