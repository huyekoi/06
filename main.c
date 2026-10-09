#include <stdio.h>

int combination(int n, int r)
{
    int result = 1;
    int i;

    for (i = 1; i <= r; i++)
    {
        result = result * (n - i + 1) / i;
    }

    return result;
}

int main(void)
{
    int n, r;
    int result;

    printf("input n : ");
    scanf("%i", &n);

    printf("input r : ");
    scanf("%i", &r);

    result = combination(n, r);

    printf("The combination result is %i\n", result);

    return 0;
}
