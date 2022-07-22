#include <stdio.h>
int main()
{
    int n;
    printf("Enter integer: ");
    scanf("%d", &n);
    if (n > 0)
{
        for (int i = 1; i < n + 1; i++)
{
        for (int r = 1; r <= i; r++)
{
    if (r == 1)
{
        for (int f = 0; f < n - i; f++)
{
    printf("*");
}
}
    printf("*");
}
    printf("\n");
}
}
    else
    {
        printf("Invalid input!");
        return -1;
    }
    return 0;
}
