#include <stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d", &n);
    int i;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j < n; j++)
        {
            if (i == 1 || i == n || j == n - i + 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}